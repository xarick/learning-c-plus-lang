#include <iostream>
#include <math.h>
using namespace std;
int main(){
int t;
float const pi=3.14;
float r,d,l,s,a,b;
cout<<"1.radius\n2.diametr\n3.uzunlik\n4.doira yuzi \nraqamlardan birini tanlang: ";
cin>>t;
switch(t)
{case 1: 
		cout<<"radiusni kiriting"<<endl; cin>>r;
		l=2*pi*r; cout<<l<<endl;
		d=2*r; cout<<d<<endl;
		s=pi*r*r; cout<<s<<endl;
		break;
case 2:
		cout<<"diametrni kiriting"<<endl; cin>>d;
		r=d/2; cout<<2<<endl;
		l=2*pi*r; cout<<l<<endl;
		s=pi*r*r; cout<<s<<endl;
		break;
case 3: 
		cout<<"uzunlikni kiriting"<<endl; cin>>l;
		d=l/pi; ; cout<<d<<endl;
		r=d/2; cout<<r<<endl;	
		s=pi*r*r; cout<<s<<endl;				
		break;
case 4:
		cout<<"yuzani kiriting"<<endl; cin>>s;
		r=sqrt(s/pi); cout<<r<<endl;
		d=2*r; cout<<d<<endl;
		l=2*pi*r; cout<<l<<endl;
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
