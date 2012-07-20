{
  // see SimGeneral/MixingModule/python/mix_E7TeV_FlatDist10_2011EarlyData_inTimeOnly_cfi.py; copy and paste from there:
  // Flat10+Tail distribution taken directly from MixingModule input:  (Can be used for Spring11 and Summer11 if you don't worry about small shifts in the mean)
  Double_t probdistFlat10_f[25] = {0.0698146584, 0.0698146584, 0.0698146584, 0.0698146584,
				   0.0698146584, 0.0698146584, 0.0698146584, 0.0698146584,
				   0.0698146584, 0.0698146584, 0.0698146584                /* <-- 10*/,
				   0.0630151648, 0.0526654164, 0.0402754482, 0.0292988928,
				   0.0194384503, 0.0122016783, 0.007207042,  0.004003637,
				   0.0020278322, 0.0010739954, 0.0004595759, 0.0002229748,
				   0.0001028162, 4.58337152809607E-05 /* <-- 24 */
  };

  // Summer11 PU_S3 and PU_S4, distribution obtained by only looking at the in-time crossing.  
  // This is the "spike+smear" distribution, RECOMMENDED FOR REWEIGHTING.
  Double_t PoissonOneXDist_f[35] = {1.45346E-01,    6.42802E-02,    6.95255E-02,    6.96747E-02,
				    6.92955E-02,    6.84997E-02,    6.69528E-02,    6.45515E-02,
				    6.09865E-02,    5.63323E-02,    5.07322E-02,    4.44681E-02,
				    3.79205E-02,    3.15131E-02,    2.54220E-02,    2.00184E-02,
				    1.53776E-02,    1.15387E-02,    8.47608E-03,    6.08715E-03,
				    4.28255E-03,    2.97185E-03,    2.01918E-03,    1.34490E-03,
				    8.81587E-04,    5.69954E-04,    3.61493E-04,    2.28692E-04,
				    1.40791E-04,    8.44606E-05,    5.10204E-05,    3.07802E-05,
				    1.81401E-05,    1.00201E-05,    5.80004E-06
  };

  // Summer11 PU_S4, distribution obtained by averaging the number of interactions
  // in each beam crossing to estimate the true mean.  
  Double_t PoissonIntDist_f[25] = {0.104109,    0.0703573,    0.0698445,    0.0698254,
				   0.0697054,   0.0697907,    0.0696751,    0.0694486,
				   0.0680332,   0.0651044,    0.0598036,    0.0527395,
				   0.0439513,   0.0352202,    0.0266714,    0.019411,
				   0.0133974,   0.00898536,   0.0057516,    0.00351493,
				   0.00212087,  0.00122891,   0.00070592,   0.000384744,
				   0.000219377  
  };
 
  // Distribution used for Fall2011 MC.
  Double_t Fall2011_f[50] = {0.003388501,   0.010357558,   0.024724258,    0.042348605,   0.058279812,
			     0.068851751,   0.072914824,   0.071579609,	   0.066811668,	  0.060672356,
			     0.054528356,   0.04919354,	   0.044886042,	   0.041341896,	  0.0384679,
			     0.035871463,   0.03341952,	   0.030915649,	   0.028395374,	  0.025798107,
			     0.023237445,   0.020602754,   0.0180688,	   0.015559693,	  0.013211063,
			     0.010964293,   0.008920993,   0.007080504,	   0.005499239,	  0.004187022,
			     0.003096474,   0.002237361,   0.001566428,	   0.001074149,	  0.000721755,
			     0.000470838,   0.00030268,	   0.000184665,	   0.000112883,	  6.74043E-05,
			     3.82178E-05,   2.22847E-05,   1.20933E-05,    6.96173E-06,   3.4689E-06,
			     1.96172E-06,   8.49283E-07,   5.02393E-07,    2.15311E-07,   9.56938E-08
  };
  
  // In-time (Poisson-smeared) Distribution for Fall 2011
  double Fall2011_InTime_f[55] = {0.014583699,    0.025682975,    0.038460562,    0.049414536,    0.056931087,
				  0.061182816,    0.062534625,    0.061476918,    0.058677499,    0.055449877,
				  0.051549051,    0.047621024,    0.043923799,    0.040569076,    0.037414654,
				  0.034227033,    0.031437714,    0.028825596,    0.026218978,    0.023727061,
				  0.021365645,    0.01918743,     0.016972815,    0.014920601,    0.013038989,
				  0.011293777,    0.009612465,    0.008193556,    0.006888047,    0.005715239,
				  0.004711232,    0.003869926,    0.003154521,    0.002547417,    0.002024714,
				  0.001574411,    0.001245808,    0.000955206,    0.000735305,    0.000557304,
				  0.000412503,    0.000305502,    0.000231002,    0.000165701,    0.000121201,
				  9.30006E-05,    6.40004E-05,    4.22003E-05,    2.85002E-05,    1.96001E-05,
				  1.59001E-05,    1.01001E-05,    8.50006E-06,    6.60004E-06,    2.70002E-06
  };

  Double_t Summer2012_f[60] = {
    2.344E-05,    2.344E-05,    2.344E-05,    2.344E-05,    4.687E-04,    4.687E-04,
    7.032E-04,    9.414E-04,    1.234E-03,    1.603E-03,    2.464E-03,    3.250E-03,
    5.021E-03,    6.644E-03,    8.502E-03,    1.121E-02,    1.518E-02,    2.033E-02,
    2.608E-02,    3.171E-02,    3.667E-02,    4.060E-02,    4.338E-02,    4.520E-02,
    4.641E-02,    4.735E-02,    4.816E-02,    4.881E-02,    4.917E-02,    4.909E-02,
    4.842E-02,    4.707E-02,    4.501E-02,    4.228E-02,    3.896E-02,    3.521E-02,
    3.118E-02,    2.702E-02,    2.287E-02,    1.885E-02,    1.508E-02,    1.166E-02,
    8.673E-03,    6.190E-03,    4.222E-03,    2.746E-03,    1.698E-03,    9.971E-04,
    5.549E-04,    2.924E-04,    1.457E-04,    6.864E-05,    3.054E-05,    1.282E-05,
    5.081E-06,    1.898E-06,    6.688E-07,    2.221E-07,    6.947E-08,    2.047E-08
  };

  TFile* outputFile = new TFile("mcPUDists60.root","RECREATE");
  //outputFile->Open();
//  TH1D* probdistFlat10_h  = new TH1D("probdistFlat10MCPUHist",  "probdistFlat10",  25, 0, 25);
//  TH1D* poissonIntDist_h  = new TH1D("poissonIntDistMCPUHist",  "poissonIntDist",  25, 0, 25);
//  TH1D* poissonOneXDist_h = new TH1D("poissonOneXDistMCPUHist", "poissonOneXDist", 35, 0, 35);
//  TH1D* fall2011_h        = new TH1D("fall2011MCPUHist",        "fall2011",        50, 0, 50);
//  TH1D* fall2011InTime_h  = new TH1D("fall2011InTimeMCPUHist",  "fall2011InTime",  55, 0, 55);

  TH1D* probdistFlat10_h  = new TH1D("probdistFlat10MCPUHist",  "probdistFlat10",  60, -0., 60);
  TH1D* poissonIntDist_h  = new TH1D("poissonIntDistMCPUHist",  "poissonIntDist",  60, -0., 60);
  TH1D* poissonOneXDist_h = new TH1D("poissonOneXDistMCPUHist", "poissonOneXDist", 60, -0., 60);
  TH1D* fall2011_h        = new TH1D("fall2011MCPUHist",        "fall2011",        60, -0., 60);
  TH1D* fall2011InTime_h  = new TH1D("fall2011InTimeMCPUHist",  "fall2011InTime",  60, -0., 60);
  TH1D* summer2012_h      = new TH1D("summer2012MCPUHist",      "summer2012",      60, -0., 60);

  probdistFlat10_h ->Sumw2();
  poissonIntDist_h ->Sumw2();
  poissonOneXDist_h->Sumw2();
  fall2011_h       ->Sumw2();
  fall2011InTime_h ->Sumw2();
  summer2012_h     ->Sumw2();

  //for(int npu=0; npu<55; ++npu){
  for(int npu=0; npu<60; ++npu){
    if (npu < 25) {
      probdistFlat10_h->SetBinContent( npu+1, probdistFlat10_f[npu] );
      poissonIntDist_h->SetBinContent( npu+1, PoissonIntDist_f[npu] );
    } else {
      probdistFlat10_h->SetBinContent(npu+1, 0. );
      poissonIntDist_h->SetBinContent(npu+1, 0. );
    }
    if (npu < 35) {
      poissonOneXDist_h->SetBinContent( npu+1, PoissonOneXDist_f[npu] );
    } else
      poissonOneXDist_h->SetBinContent( npu+1, 0. );

    if (npu < 50) {
      fall2011_h->SetBinContent( npu+1, Fall2011_f[npu] );
    } else {
      fall2011_h->SetBinContent( npu+1, 0. );
    }
    if (npu < 55) {
      fall2011InTime_h->SetBinContent( npu+1, Fall2011_InTime_f[npu] );
    } else {
      fall2011InTime_h->SetBinContent( npu+1, 0. );
    }
    summer2012_h->SetBinContent( npu+1, Summer2012_f[npu] );
    ///////////////    
    std::cout << "probdistFlat10   " << probdistFlat10_h->GetBinContent(npu+1) << " " 
	      << "PoissonIntDist   " << poissonIntDist_h->GetBinContent(npu+1) << " " 
	      << "PoissonOneXDist  " << poissonOneXDist_h->GetBinContent(npu+1) << " " 
	      << "Fall2011         " << fall2011_h->GetBinContent(npu+1) << " " 
	      << "Fall2011_InTime  " << fall2011InTime_h->GetBinContent(npu+1) << " " 
	      << "Summer2012       " << summer2012_h->GetBinContent(npu+1) << " " 
	      << std::endl;
  }

  probdistFlat10_h ->Write();
  poissonIntDist_h ->Write();
  poissonOneXDist_h->Write();
  fall2011_h       ->Write();
  fall2011InTime_h ->Write();
  summer2012_h     ->Write();

  outputFile->Close();
}
