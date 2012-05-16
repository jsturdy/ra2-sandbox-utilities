import FWCore.ParameterSet.Config as cms

puWeight = cms.EDProducer("PUWeightProducer",
                          PUInfoSource       = cms.InputTag("addPileupInfo"),
                          DataPileUpHistFile = cms.FileInPath("SandBox/Utilities/data/pileupTruth_finebin.root"),
                          MCPileUpHistFile   = cms.FileInPath("SandBox/Utilities/data/mcPUDists.root"),
                          PileUpModeForMC    = cms.string("Fall11_PUS6"),
                          Debug              = cms.bool(False)
                          )
