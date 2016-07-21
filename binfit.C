#include <string>
#include <stdlib.h>
#include <cmath>
#include "Riostream.h"

#include <TROOT.h>
#include <TChain.h>
#include <TCanvas.h>
#include <TFile.h>
#include <TStyle.h>
#include <TRandom3.h>
#include <TString.h>
#include <TH1D.h>
#include <TH2D.h>
#include <TH1F.h>
#include <TH2F.h>
#include "TF1.h"
#include <TLorentzVector.h>
#include <TVector3.h>


int main() {
  gROOT->Reset();

  float scaledps,scalesps,scalenlo,siggg,siggu,sigug;
  float datamass[80];
  for(int i=0; i<80; ++i){
    datamass[i]=0;}
  int dpsmass[80]={0};
  int spsmass[80]={0};
  float nlomass[80]={0.0};
  int nloggmass[80]={0};
  int nlogumass[80]={0};
  int nlougmass[80]={0};
//  float datapt[60],datady[20],datay[20];
  datamass[0]=1417.0;        
  datamass[7]=185.599;  
  datamass[8]=112.483;  
  datamass[9]=82.4246; 
  datamass[10]=69.3883;
  datamass[11]=48.9783;
  datamass[12]=41.0706;
  datamass[13]=48.9479;
  datamass[14]=33.7332;
  datamass[15]=32.6151;
  datamass[16]=25.7971;
  datamass[17]=24.3149;
  datamass[18]=21.2219;
  datamass[19]=21.3993;
  datamass[20]=13.4529;
  datamass[21]=23.0348; 
  datamass[22]=18.1757; 
  datamass[23]=16.3802; 
  datamass[24]=23.2986; 
  datamass[25]=17.7511; 
  datamass[26]=27.1566; 
  datamass[27]=11.0779; 
  datamass[28]=12.7438; 
  datamass[29]=15.0925; 
  datamass[30]=6.61173; 
  datamass[31]=10.9653; 
  datamass[32]=11.4675; 
  datamass[33]=7.47168; 
  datamass[34]=10.6872; 
  datamass[35]=5.22744; 
  datamass[36]=5.9302;  
  datamass[37]=7.2517;  
  datamass[38]=7.905;   
  datamass[39]=7.76056; 
  datamass[40]=4.26483; 
  datamass[41]=4.74077; 
  datamass[42]=5.78916; 
  datamass[43]=8.5329;  
  datamass[44]=2.43137; 
  datamass[45]=3.66058; 
  datamass[46]=3.18654; 
  datamass[47]=4.80957; 
  datamass[48]=1.84394; 
  datamass[49]=3.24245; 
  datamass[50]=7.56019; 
  datamass[51]=2.2878;  
  datamass[52]=1.25934; 
  datamass[53]=4.42686; 
  datamass[54]=0.;      
  datamass[55]=2.90633; 
  datamass[56]=3.91334; 
  datamass[57]=4.10018; 
  datamass[58]=4.12905; 
  datamass[59]=4.42358; 
  datamass[60]=2.29174; 
  datamass[61]=2.07137; 
  datamass[65]=3.41631; 
  datamass[66]=1.09094; 
  datamass[68]=1.14182; 
  datamass[69]=1.05952; 
  datamass[72]=2.25836; 
  datamass[76]=0.527647;
  datamass[79]=1.47202; 
  dpsmass[0]=4726;
  dpsmass[7]=96;
  dpsmass[8]=127;
  dpsmass[9]=150;
  dpsmass[10]=112;
  dpsmass[11]=140;
  dpsmass[12]=172;
  dpsmass[13]=177;
  dpsmass[14]=202;
  dpsmass[15]=171;
  dpsmass[16]=184;
  dpsmass[17]=147;
  dpsmass[18]=125;
  dpsmass[19]=114;
  dpsmass[20]=100;
  dpsmass[21]=108;
  dpsmass[22]=62;
  dpsmass[23]=82;
  dpsmass[24]=81;
  dpsmass[25]=72;
  dpsmass[26]=63;
  dpsmass[27]=72;
  dpsmass[28]=68;
  dpsmass[29]=66;
  dpsmass[30]=65;
  dpsmass[31]=64;
  dpsmass[32]=90;
  dpsmass[33]=85;
  dpsmass[34]=79;
  dpsmass[35]=94;
  dpsmass[36]=82;
  dpsmass[37]=106;
  dpsmass[38]=83;
  dpsmass[39]=90;
  dpsmass[40]=96;
  dpsmass[41]=87;
  dpsmass[42]=72;
  dpsmass[43]=75;
  dpsmass[44]=73;
  dpsmass[45]=79;
  dpsmass[46]=74;
  dpsmass[47]=62;
  dpsmass[48]=56;
  dpsmass[49]=60;
  dpsmass[50]=54;
  dpsmass[51]=42;
  dpsmass[52]=32;
  dpsmass[53]=28;
  dpsmass[54]=25;
  dpsmass[55]=42;
  dpsmass[56]=28;
  dpsmass[57]=26;
  dpsmass[58]=15;
  dpsmass[59]=26;
  dpsmass[60]=18;
  dpsmass[61]=24;
  dpsmass[62]=19;
  dpsmass[63]=8;
  dpsmass[64]=13;
  dpsmass[65]=10;
  dpsmass[66]=7;
  dpsmass[67]=6;
  dpsmass[68]=4;
  dpsmass[69]=2;
  dpsmass[70]=5;
  dpsmass[71]=6;
  dpsmass[72]=2;
  dpsmass[73]=5;
  dpsmass[74]=1;
  dpsmass[75]=4;
  dpsmass[76]=4;
  dpsmass[77]=1;
  dpsmass[78]=1;
  dpsmass[79]=2;
  dpsmass[80]=3;
  spsmass[0]=1175;
  spsmass[7]=16;
  spsmass[8]=30;
  spsmass[9]=24;
  spsmass[10]=35;
  spsmass[11]=34;
  spsmass[12]=65;
  spsmass[13]=83;
  spsmass[14]=102;
  spsmass[15]=113;
  spsmass[16]=79;
  spsmass[17]=99;
  spsmass[18]=71;
  spsmass[19]=75;
  spsmass[20]=56;
  spsmass[21]=48;
  spsmass[22]=46;
  spsmass[23]=43;
  spsmass[24]=20;
  spsmass[25]=19;
  spsmass[26]=13;
  spsmass[27]=14;
  spsmass[28]=17;
  spsmass[29]=9;
  spsmass[30]=5;
  spsmass[31]=8;
  spsmass[32]=9;
  spsmass[33]=11;
  spsmass[34]=6;
  spsmass[35]=5;
  spsmass[36]=3;
  spsmass[37]=4;
  spsmass[38]=1;
  spsmass[39]=4;
  spsmass[41]=1;
  spsmass[42]=2;
  spsmass[43]=1;
  spsmass[44]=1;
  spsmass[46]=1;
  spsmass[52]=1;
  spsmass[70]=1;
  nloggmass[0]=2225;
  nloggmass[6]=3;
  nloggmass[7]=292;
  nloggmass[8]=274;
  nloggmass[9]=239;
  nloggmass[10]=174;
  nloggmass[11]=138;
  nloggmass[12]=144;
  nloggmass[13]=110;
  nloggmass[14]=83;
  nloggmass[15]=96;
  nloggmass[16]=84;
  nloggmass[17]=86;
  nloggmass[18]=57;
  nloggmass[19]=52;
  nloggmass[20]=58;
  nloggmass[21]=54;
  nloggmass[22]=36;
  nloggmass[23]=30;
  nloggmass[24]=31;
  nloggmass[25]=23;
  nloggmass[26]=23;
  nloggmass[27]=19;
  nloggmass[28]=18;
  nloggmass[29]=30;
  nloggmass[30]=9;
  nloggmass[31]=10;
  nloggmass[32]=6;
  nloggmass[33]=9;
  nloggmass[34]=8;
  nloggmass[35]=4;
  nloggmass[36]=4;
  nloggmass[37]=5;
  nloggmass[38]=1;
  nloggmass[39]=5;
  nloggmass[41]=2;
  nloggmass[42]=2;
  nloggmass[43]=2;
  nloggmass[46]=1;
  nloggmass[47]=1;
  nloggmass[50]=1;
  nloggmass[52]=1;
  nlogumass[0]=915;
  nlogumass[7]=94;
  nlogumass[8]=124;
  nlogumass[9]=95;
  nlogumass[10]=70;
  nlogumass[11]=57;
  nlogumass[12]=59;
  nlogumass[13]=54;
  nlogumass[14]=40;
  nlogumass[15]=49;
  nlogumass[16]=47;
  nlogumass[17]=34;
  nlogumass[18]=29;
  nlogumass[19]=25;
  nlogumass[20]=17;
  nlogumass[21]=20;
  nlogumass[22]=15;
  nlogumass[23]=10;
  nlogumass[24]=11;
  nlogumass[25]=7;
  nlogumass[26]=12;
  nlogumass[27]=9;
  nlogumass[28]=7;
  nlogumass[29]=2;
  nlogumass[30]=5;
  nlogumass[31]=4;
  nlogumass[32]=3;
  nlogumass[33]=5;
  nlogumass[34]=3;
  nlogumass[36]=3;
  nlogumass[37]=2;
  nlogumass[46]=2;
  nlogumass[47]=1;
  nlougmass[0]=2003;
  nlougmass[6]=4;
  nlougmass[7]=308;
  nlougmass[8]=264;
  nlougmass[9]=218;
  nlougmass[10]=192;
  nlougmass[11]=157;
  nlougmass[12]=123;
  nlougmass[13]=93;
  nlougmass[14]=69;
  nlougmass[15]=66;
  nlougmass[16]=61;
  nlougmass[17]=71;
  nlougmass[18]=60;
  nlougmass[19]=42;
  nlougmass[20]=45;
  nlougmass[21]=35;
  nlougmass[22]=32;
  nlougmass[23]=23;
  nlougmass[24]=23;
  nlougmass[25]=16;
  nlougmass[26]=26;
  nlougmass[27]=16;
  nlougmass[28]=8;
  nlougmass[29]=9;
  nlougmass[30]=4;
  nlougmass[31]=11;
  nlougmass[32]=6;
  nlougmass[33]=1;
  nlougmass[34]=2;
  nlougmass[36]=3;
  nlougmass[37]=1;
  nlougmass[39]=3;
  nlougmass[40]=1;
  nlougmass[41]=4;
  nlougmass[42]=1;
  nlougmass[44]=1;
  nlougmass[45]=1;
  nlougmass[46]=1;
  nlougmass[49]=1;
  nlougmass[58]=1;
  //setup nlo number
  int tot = nlogumass[0] + nlougmass[0] + nloggmass[0];
  siggg=2.01;siggu=0.45;sigug=0.13;
  for(int i=1; i<81; ++i){
    nlomass[i]= nloggmass[i]*siggg + nlogumass[i]* siggu + nlougmass[i]*sigug;
   // std::cout<<nlomass[i]<<std::endl;
  }
  scaledps = datamass[0]/ (float) dpsmass[0];
  scalesps = datamass[0]/(float) spsmass[0];
  scalenlo = datamass[0]/(float) tot;
  float Chi2=0;
  //   Chi2 = Chi2 + pow((datamass[1] - (0.00*scaledps*dpsmass[1] + 0.0*scalesps*spsmass[1] + 0.0*scalenlo*nlomass[1])),2)/sqrt(datamass[1]);
     std::cout<<"Scale: " <<datamass[0]<<" " << dpsmass[0]<<" "<<scaledps<<" "<<scalesps<<" "<<scalenlo<<" "<<std::endl;
  for(float a=0.0; a<1; a=a+0.1){
    for(float b=0.0; b<1; b=b+0.1){
      for(float c=0.0; c<1; c=c+0.1){
        for(int mbin=1; mbin<80; ++mbin){
          if (datamass[mbin]<1){
            Chi2 = Chi2 + pow((datamass[mbin] - (a*scaledps*dpsmass[mbin] + b*scalesps*spsmass[mbin] + c*scalenlo*nlomass[mbin])),2)/sqrt(1.6);
            std::cout<<Chi2<<std::endl;
          }
          else{
            Chi2 = Chi2 + pow((datamass[mbin] - (a*scaledps*dpsmass[mbin] + b*scalesps*spsmass[mbin] + c*scalenlo*nlomass[mbin])),2)/sqrt(abs(datamass[mbin]));
            std::cout<<Chi2<<std::endl;
          }
        }
        std::cout<<"a, b, c: "<<a<<" "<<b<<" "<<c<<" Chi2: "<<Chi2<<std::endl;
        std::cin.ignore();
        //std::cout<<a<<" "<<b<<" "<<c<<" "<<Chi2<<std::endl;
        Chi2=0;
      }
    }
  }
}
