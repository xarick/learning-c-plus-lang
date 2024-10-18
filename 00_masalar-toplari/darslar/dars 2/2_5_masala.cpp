#include <iostream>
#include <math.h>
using namespace std;

int main(){
float s=0,a,k=0;
ikki: 
cout<<"a="; cin>>a;
k++;
s=a*a*sqrt(3)/4;
cout<<"s="<<s<<endl;
if(k==3)return 0;
goto ikki;
return 0;
}
