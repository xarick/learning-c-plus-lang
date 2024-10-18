#include <iostream>
#include <math.h>
using namespace std;
int main(){
int t,m,n;
float const pi=3.14;
float r,d,l,s,a,b,c,h;
cout<<"qiymatni kiriting [6 - 14]\n"; cin>>n;

cout<<"1.gisht\n2.olma\n3.chillak\n4.qarga \nbulardan birini tanlang: ";
cin>>m;
switch(n)
{
	case 6 : cout<<"olti "; break;
	case 7 : cout<<"yetti "; break;
	case 8 : cout<<"sakkiz "; break;
	case 9 : cout<<"toqqiz "; break;
	case 10 : cout<<"on "; break;
	case 11: cout<<"valet "; break;
	case 12 : cout<<"dama "; break;
	case 13 : cout<<"qirol "; break;
	case 14 : cout<<"tuz "; break;
	default: cout<<" xato " ;
}
switch(m)
{
	case 1 : cout<<"gisht "; break;
	case 2 : cout<<"olma "; break;
	case 3 : cout<<"chillak "; break;
	case 4 : cout<<"qarga "; break;
	default: cout<<" xato " ;
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
