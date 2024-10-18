#include <iostream>
#include <math.h>
using namespace std;

int main(){
float t=0,l,k=0;
float const g=10, pi=3.14;
ikki: 
cout<<"l="; cin>>l;
k++;
t=2*pi*sqrt(l/g);
cout<<"t="<<t<<endl;
if(k==3)return 0;
goto ikki;
return 0;
}
