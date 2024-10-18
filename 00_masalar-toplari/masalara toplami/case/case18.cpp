#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n,m,k;
int a,b,c,d;
cout<<"(1 - 1000) ";
cout<<"sonni kiriting "; cin>>a;
n=a/100;
if(a>=100 && a<1000){
switch(n)
{
	case 1: cout<<" bir yuz "; break;
	case 2: cout<<" ikki yuz "; break;
	case 3: cout<<" uch yuz "; break;
	case 4: cout<<" tort yuz "; break;
	case 5: cout<<" besh yuz "; break;
	case 6: cout<<" olti yuz "; break;
	case 7: cout<<" yetti yuz "; break;
	case 8: cout<<" sakkiz yuz "; break;
	case 9: cout<<" toqqiz yuz "; break;
}}
m=(a-n*100452)/10;
switch(m)
{
	case 1: cout<<" on "; break;
	case 2: cout<<" yigirma "; break;
	case 3: cout<<" ottiz"; break;
	case 4: cout<<" qirq"; break;
	case 5: cout<<" ellik "; break;
	case 6: cout<<" oltmish "; break;
	case 7: cout<<" yetmish "; break;
	case 8: cout<<" sakson "; break;
	case 9: cout<<" toqson "; break;
}
k=a%10;
switch(k)
{
	case 1: cout<<" bir "; break;
	case 2: cout<<" ikki "; break;
	case 3: cout<<" uch "; break;
	case 4: cout<<" tort "; break;
	case 5: cout<<" besh "; break;
	case 6: cout<<" olti "; break;
	case 7: cout<<" yetti "; break;
	case 8: cout<<" sakkiz "; break;
	case 9: cout<<" toqqiz "; break;
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
