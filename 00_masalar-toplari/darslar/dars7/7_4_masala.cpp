#include <iostream>
#include <math.h>
using namespace std;
int main(){
int a,b,c,d;
cin>>a;

if(a<=10 && a>=1){
	b=a;
switch(b){
case 1: cout<<"bir"; break;
case 2: cout<<"ikki"; break;
case 3: cout<<"uch"; break;
case 4: cout<<"to'rt"; break;
case 5: cout<<"besh"; break;
case 6: cout<<"olti"; break;
case 7: cout<<"yetti"; break;
case 8: cout<<"sakkiz"; break;
case 9: cout<<"to'qqiz "; break;
case 10: cout<<"o'n"; break;
default : cout<<"bunday ..... yo'q";
}}
if(a>10 && a<=100)
{
	c=a/10;
switch(c){
case 1: cout<<"o'n "; break;
case 2: cout<<"yigirma "; break;
case 3: cout<<"o'ttiz "; break;
case 4: cout<<"qirq "; break;
case 5: cout<<"ellik "; break;
case 6: cout<<"oltmish "; break;
case 7: cout<<"yetmish "; break;
case 8: cout<<"sakson "; break;
case 9: cout<<"to'qson "; break;
case 10: cout<<"yuz "; break;
}
d=a%10;
switch(d){
case 1: cout<<"bir"; break;
case 2: cout<<"ikki"; break;
case 3: cout<<"uch"; break;
case 4: cout<<"to'rt"; break;
case 5: cout<<"besh"; break;
case 6: cout<<"olti"; break;
case 7: cout<<"yetti"; break;
case 8: cout<<"sakkiz"; break;
case 9: cout<<"to'qqiz"; break;
case 10: cout<<"o'n"; break;
}
}
return 0;
}

// switch(x)
// case a:
// a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
