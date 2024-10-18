#include <iostream>
#include <math.h>
using namespace std;

int main(){
float V=0,T=0,T1,T2,V1,V2;
int k=0;
uch:
	k++;
cout<<"T1= "; cin>>T1;
cout<<"T2= "; cin>>T2;
cout<<"V1= "; cin>>V1;
cout<<"V2= "; cin>>V2;
T=((V1+V2)*T2+V1*T1)/(2*V1+V2);
V=V1+V2;
cout<<"T= "<<T<<endl;
cout<<"V= "<<V<<endl;
if(k==3)return 0;
goto uch;
return 0;
}
