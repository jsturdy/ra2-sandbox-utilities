// -*- C++ -*-
//
// Package:    PUDistributionMC
// Class:      PUDistributionMC
// 
/**\class PUDistributionMC PUDistributionMC.cc SandBox/Utilities/src/PUDistributionMC.cc

 Description: [one line class summary]

 Implementation:
     [Notes on implementation]
*/
//
// Original Author:  Seema Sharma
//         Created:  Sun Jun 26 18:17:20 CDT 2011
// $Id$
//
//


// system include files
#include <memory>

// user include files
#include "FWCore/Framework/interface/Frameworkfwd.h"
#include "FWCore/Framework/interface/EDAnalyzer.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/MakerMacros.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"

#include "SimDataFormats/PileupSummaryInfo/interface/PileupSummaryInfo.h" 

// TFile Service
#include "FWCore/ServiceRegistry/interface/Service.h"
#include "CommonTools/UtilAlgos/interface/TFileService.h"
#include "TH1F.h"

class PUDistributionMC : public edm::EDAnalyzer {
public:
  explicit PUDistributionMC(const edm::ParameterSet&);
  ~PUDistributionMC();
  
  static void fillDescriptions(edm::ConfigurationDescriptions& descriptions);
  
  
private:
  virtual void beginJob() ;
  virtual void analyze(const edm::Event&, const edm::EventSetup&);
  virtual void endJob() ;
  
  virtual void beginRun(edm::Run const&, edm::EventSetup const&);
  virtual void endRun(edm::Run const&, edm::EventSetup const&);
  virtual void beginLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&);
  virtual void endLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&);
  void BookHistograms();

  edm::InputTag  puInfoSource_;
  bool debug_;

  edm::Service<TFileService> fs;
  TH1F *h_pileup;
};

PUDistributionMC::PUDistributionMC(const edm::ParameterSet& iConfig) {
  puInfoSource_       = iConfig.getParameter<edm::InputTag>  ("PUInfoSource");
  debug_              = iConfig.getParameter<bool>("Debug");
}


PUDistributionMC::~PUDistributionMC() {

}

void PUDistributionMC::analyze(const edm::Event& ev, const edm::EventSetup& es) {
  using namespace edm;

    Handle<std::vector< PileupSummaryInfo > >  PupInfo;
    ev.getByLabel(puInfoSource_, PupInfo);

    std::vector<PileupSummaryInfo>::const_iterator PVI;
    
    int npu = -1;
    
    if( debug_ ) 
      std::cout<<"PupInfo->size() " << PupInfo->size() << std::endl;

    for(PVI = PupInfo->begin(); PVI != PupInfo->end(); ++PVI) {
      if( debug_ ) {
	std::cout << "BX " << PVI->getBunchCrossing()
		  << " NumInteractions " << PVI->getPU_NumInteractions()
		  << std::endl;
      }

      int BX = PVI->getBunchCrossing();
      if(BX == 0) { 
	npu = PVI->getPU_NumInteractions();
	h_pileup->Fill( npu );
	continue;
      }
    }
    
    
}

void PUDistributionMC::beginJob() {
  BookHistograms();
}

void PUDistributionMC::endJob() {
}

void PUDistributionMC::beginRun(edm::Run const&, edm::EventSetup const&) {
}

void PUDistributionMC::endRun(edm::Run const&, edm::EventSetup const&) {
}

void PUDistributionMC::beginLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&) {
}

void PUDistributionMC::endLuminosityBlock(edm::LuminosityBlock const&, edm::EventSetup const&) {
}

void PUDistributionMC::fillDescriptions(edm::ConfigurationDescriptions& descriptions) {
  //The following says we do not know what parameters are allowed so do no validation
  // Please change this to state exactly what you do use, even if it is no parameters
  edm::ParameterSetDescription desc;
  desc.setUnknown();
  descriptions.addDefault(desc);
}

void PUDistributionMC::BookHistograms() {
  h_pileup = fs->make<TH1F>("pileup", "pileup", 51, -0.5, 50.5);
}


//define this as a plug-in
DEFINE_FWK_MODULE(PUDistributionMC);
