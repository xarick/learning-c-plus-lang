#include <iostream>
#include <math.h>
using namespace std;

int main(){
float arif=0, geo=0,a,b,k=0;
ortga:
	k++; 
cout<<"a="; cin>>a;
cout<<"b="; cin>>b;
arif=(a+b)/2;
geo=sqrt(a*b);
cout<<"arif= "<<arif<<endl;
cout<<"geo= "<<geo<<endl;
if(k==3) { return 0; }
goto ortga;

return 0;
}
