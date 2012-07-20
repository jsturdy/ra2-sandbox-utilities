import FWCore.ParameterSet.Config as cms

puWeight = cms.EDProducer("PUWeightProducer",
                          PUInfoSource       = cms.InputTag("addPileupInfo"),
                          DataPileUpHistFile = cms.FileInPath("SandBox/Utilities/data/pileupTruth.root"),
                          MCPileUpHistFile   = cms.FileInPath("SandBox/Utilities/data/mcPUDists60.root"),
                          PileUpModeForMC    = cms.string("Summer12"),
                          Debug              = cms.bool(False)
                          )
