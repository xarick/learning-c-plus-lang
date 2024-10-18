#include <iostream>
#include <math.h>
using namespace std;

int main(){
float r=0,r1,r2,r3;
int k=0;
tort:
	k++;
cout<<"r1= ";cin>>r1;
cout<<"r2= ";cin>>r2;
cout<<"r3= ";cin>>r3;
r=r1*r2*r3/(r1*r2+r1*r3+r2*r3);
cout<<r<<endl;
if(k==3)return 0;
goto tort;
return 0;
}
