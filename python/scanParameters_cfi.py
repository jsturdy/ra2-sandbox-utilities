import FWCore.ParameterSet.Config as cms

msugraScan = cms.EDProducer( "ModelScan",
                              InputTag  = cms.InputTag('source'),
                              Prefix    = cms.string('susyScan'),
                              Suffix    = cms.string(''),
                              ScanFormat = cms.string(r"# model msugra_(\\d*)_(\\d*)_(m?\\d*)_(m?\\d*)_(m?\\d)\\s"),
                              ScanParameters = cms.vstring('M0', 'M12', 'tanbeta', 'A0', 'Mu')
                              )
smsT1Scan = msugraScan.clone()
smsT1Scan.Prefix    = cms.string('smsT1Scan'),
smsT1Scan.ScanFormat = cms.string(r"# model T1_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s")
smsT1Scan.ScanParameters = cms.vstring('xCHI', 'mGL', 'mLSP')

smsT1bbbbScan = msugraScan.clone()
smsT1bbbbScan.Prefix    = cms.string('smsT1bbbbScan'),
smsT1bbbbScan.ScanFormat = cms.string(r"# model T1bbbb_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s")
smsT1bbbbScan.ScanParameters = cms.vstring('xCHI', 'mGL', 'mLSP')

smsT1ttttScan = msugraScan.clone()
smsT1ttttScan.Prefix    = cms.string('smsT1ttttScan'),
smsT1ttttScan.ScanFormat = cms.string(r"# model T1tttt_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s")
smsT1ttttScan.ScanParameters = cms.vstring('xCHI', 'mGL', 'mLSP')

smsT2Scan = msugraScan.clone()
smsT2Scan.Prefix    = cms.string('smsT2Scan'),
smsT2Scan.ScanFormat = cms.string(r"# model T2_(\\d*\.\\d*)_(\\d*\.\\d*)\\s")
smsT2Scan.ScanParameters = cms.vstring('mGL', 'mLSP')

smsT2bbScan = msugraScan.clone()
smsT2bbScan.Prefix    = cms.string('smsT2bbScan'),
smsT2bbScan.ScanFormat = cms.string(r"# model T2bb_(\\d*\.\\d*)_(\\d*\.\\d*)\\s")
smsT2bbScan.ScanParameters = cms.vstring('mGL', 'mLSP')

smsT2ttScan = msugraScan.clone()
smsT2ttScan.Prefix    = cms.string('smsT2ttScan'),
smsT2ttScan.ScanFormat = cms.string(r"# model T2tt_(\\d*\.\\d*)_(\\d*\.\\d*)\\s")
smsT2ttScan.ScanParameters = cms.vstring('mGL', 'mLSP')

smsTGQScan = msugraScan.clone()
smsTGQScan.Prefix    = cms.string('smsTGQScan'),
smsTGQScan.ScanFormat = cms.string(r"# model TGQ_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s")
smsTGQScan.ScanParameters = cms.vstring('xCHI', 'mGL', 'mLSP')

smsT5zzScan = msugraScan.clone()
smsT5zzScan.Prefix    = cms.string('smsT5zzScan'),
smsT5zzScan.ScanFormat = cms.string(r"# model T5zz_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s")
smsT5zzScan.ScanParameters = cms.vstring('xCHI', 'mGL', 'mLSP')

smsT5zzIncScan = msugraScan.clone()
smsT5zzIncScan.Prefix    = cms.string('smsT5zzIncScan'),
smsT5zzIncScan.ScanFormat = cms.string(r"# model T5zzInc_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s")
smsT5zzIncScan.ScanParameters = cms.vstring('xCHI', 'mGL', 'mLSP')

#scanFormats = {'T1' : r"# model T1_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s",
#               'T2' : r"# model T2_(\\d*\.\\d*)_(\\d*\.\\d*)\\s",
#               'T1bbbb' : r"# model T1bbbb_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s",
#               'T2bb' : r"# model T2bb_(\\d*\.\\d*)_(\\d*\.\\d*)\\s",
#               'T2tt' : r"# model T2tt_(\\d*\.\\d*)_(\\d*\.\\d*)\\s",
#               'T3w' : r"# model T3w_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s",
#               'T3wb' : r"# model T3wb_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s",
#               'T1taunu' : r"# model T1taunu_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s",
#               'msugra' : r"# model msugra_(\\d*)_(\\d*)_(m?\\d*)_(m?\\d*)_(m?\\d)\\s",
#               'TGQ' : r"# model TGQ_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s",
#               'T5zz' : r"# model T5zz_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s",
#               'T1tttt' : r"# model T1tttt_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s",
#               'T5zzInc' : r"# model T5zzInc_(\\d*\.\\d*)_(\\d*\.\\d*)_(\\d*\.\\d*)\\s"}
#
#scanParameters = {"T1" : ['xCHI', 'mGL', 'mLSP'],
#                  "T2" : [ 'mGL', 'mLSP'],
#                  "T1bbbb" : ['xCHI', 'mGL', 'mLSP'],
#                  "T1tttt" : ['xCHI', 'mGL', 'mLSP'],
#                  "T2bb" : ['mGL', 'mLSP'],
#                  "T2tt" : ['mGL', 'mLSP'],
#                  "T3w" : ['xCHI', 'mGL', 'mLSP'],
#                  "T3wb" : ['xCHI', 'mGL', 'mLSP'],
#                  "T1taunu" : ['xCHI', 'mGL', 'mLSP'],
#                  'msugra' : ['M0', 'M12', 'tanbeta', 'A0', 'Mu'],
#                  "TGQ" : ['xCHI', 'mGL', 'mLSP'],
#                  "T5zz" : ['xCHI', 'mGL', 'mLSP'],
#                  "T5zzInc" : ['xCHI', 'mGL', 'mLSP']}
