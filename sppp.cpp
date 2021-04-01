#include<iostream>
#include<cmath>
using namespace std;

int main()
{
int t ; float d;
float xf[12],yf[12],xb[12],yb[12],vf;

cout<<"1/17/FET/BCS/007\nAbhishek Malik 8CSA\nAssignment 1\n";
cout<<"Simulation of Pure Pursuit Problem\n";
cout<<"Enter bomber's path, xb[t], yb[t]::\n";
  for(int i=0;i<=12;i++)
  {
  cin>>xb[i]>>yb[i];
  }
cout<<"Enter Fighter's initial co-ordinates, xf[0], yf[0]::\n";
cin>>xf[0]>>yf[0];
cout<<"Enter Fighter speed, vf::\n";
cin>>vf;
for(t=0;t<=12;t++) {
  d=sqrt(pow((yb[t]-yf[t]),2)+pow((xb[t]-xf[t]),2));
  if(d<10)
    {
    cout<<"\nBomber caught at "<<t<<" mts and "<<d<<" kms\n";
    break;
     }
    else
    {
    xf[t+1]=xf[t]+(vf*(xb[t]-xf[t])/d);
    yf[t+1]=yf[t]+(vf*(yb[t]-yf[t])/d);
     }
}
if(t>10)
cout<<"Bomber has Escaped\n";
return 0;
  }