#include "TH1D.h"
#include "TVirtualFFT.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TMath.h"
#include "TGraph.h"
void freq2()
{
  TCanvas *myc = new TCanvas("myc", "FFT", 800, 600);
  TPad *c1_5 = new TPad("c1_5", "c1_5", .01,.01,.99,.99);
  TPad *c1_6 = new TPad("c1_6", "c1_6", .01,.01,.99,.99);
  Int_t n=100;
  Float_t range=4*TMath::Pi();
  //TF1 *fsin = new TF1("fsin", "sin(x)+sin(2*x)+sin(0.5*x)", 0, range);//sin(x)+sin(2*x)+sin(0.5*x)+1
  TF1 *fsin = new TF1("fsin", "sin(x*5)", 0, 4*TMath::Pi());//sin(x)+sin(2*x)+sin(0.5*x)+1
  TH1D *hsin = new TH1D("hsin","hsin",n+1,0 ,range);
  Double_t x;
  

  for (Int_t i=0; i<=n; i++)
  {
    x = (Double_t(i)/n)*(range);
    hsin->SetBinContent(i+1, fsin->Eval(x));
  }
  
  TCanvas *c1 = new TCanvas("c1", "c1", 600, 400);
  hsin->Draw();


  TVirtualFFT::SetTransform(0);

 // TVirtualFFT *fft_own = TVirtualFFT::FFT(1, &n_size, "R2C");
 // if (!fft_own) return;
 // fft_own->SetPoints(in);
 // fft_own->Transform();
 // fft_own->GetPoints(in);
  

  myc->cd();
  //TH1 *hr = 0;
  //hr = TH1::TransformHisto(fft_own, hr, "RE");
  //hr->Draw();
  //hr->SetStats(kFALSE);
  //TH1 *him = 0;
  //him = TH1::TransformHisto(fft_own, him, "IM");
  //him->SetLineColor(kRed);
  //him->Draw();
  //him->SetStats(kFALSE);
  TH1 *himag = 0;
  himag = hsin->FFT(himag,"MAG");
  //himag = TH1::TransformHisto(fft_own, himag, "MAG");
  himag->SetLineColor(kBlack);
  //himag->Scale(1./TMath::Sqrt(n+1));
  himag->Draw();
  himag->SetStats(kFALSE);
  const int nbins = himag->GetXaxis()->GetNbins();
  double new_bins[nbins+1];
  for(int i=0; i <= nbins; i++){
    new_bins[i] = (1./(range))*( himag-> GetBinLowEdge(i+1) );
  }
 himag->SetBins(nbins, new_bins);
 //him->SetBins(nbins, new_bins);
 //hr->SetBins(nbins, new_bins);
 himag->SetXTitle(" Frequency ");
 himag->SetYTitle("Strength (Arb)");
 himag->SetTitle("Magnitude (black)");
 //himag->SetTitle("Magnitude (black) RE (blue) IM(red)");

  myc->cd();
//  him->Draw();
  himag->GetXaxis()->SetRangeUser(0,(n+1)/(2*range));
  himag->Draw();
//  hr->Draw("same");

//  myc->SaveAs("example_FFT_IM.gif");                                                                                                                     
  //
}
