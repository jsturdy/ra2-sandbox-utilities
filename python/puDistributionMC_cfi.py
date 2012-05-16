import FWCore.ParameterSet.Config as cms

puHist = cms.EDAnalyzer('PUDistributionMC',
                        PUInfoSource       = cms.InputTag("addPileupInfo"),
                        Debug              = cms.bool(False)
)
