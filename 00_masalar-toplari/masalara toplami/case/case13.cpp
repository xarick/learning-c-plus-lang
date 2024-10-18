#include <iostream>
#include <math.h>
using namespace std;
int main(){
int t;
float const pi=3.14;
float r,d,l,s,a,b,c,h;
cout<<"1.katet\n2.gipatenuza\n3.gipotenuzaga tushurilgan balandlik\n4.yuza \nraqamlardan birini tanlang: ";
cin>>t;
switch(t)
{case 1: 
		cout<<"katetni kiriting"<<endl; cin>>a;
		c=sqrt(2)*a; cout<<c<<endl;
		h=c/2; cout<<h<<endl;
		s=c*h/2; cout<<s<<endl;
		break;
case 2:
		cout<<"gipatenuzani kiriting"<<endl; cin>>c;
		a=c/sqrt(2); cout<<a<<endl;
		h=c/2; cout<<h<<endl;
		s=c*h/2; cout<<s<<endl;
		break;
case 3: 
		cout<<"balandlikni kiriting"<<endl; cin>>h;
		c=h*2; ; cout<<c<<endl;
		a=c/sqrt(2); cout<<a<<endl;
		s=c*h/2; cout<<s<<endl;
		break;;
case 4:
		cout<<"yuzani kiriting"<<endl; cin>>s;
		c=s*s/4; cout<<c<<endl;
		h=c/2; cout<<h<<endl;
		a=c/sqrt(2); cout<<a<<endl;
		break;	
default:cout<<"bunday ... yoq ";
}
return 0;
}
// 1000000 => 1E+6;
// switch(x)
// case 1,2..:
// a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
