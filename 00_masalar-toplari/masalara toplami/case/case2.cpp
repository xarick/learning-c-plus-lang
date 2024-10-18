#include <iostream>
#include <math.h>
using namespace std;
int main(){
int a;
cin>>a;

switch(a){
case 1 : cout<<"yomon";
		break;
case 2 : cout<<"qoniqarsiz";
		break;
case 3 : cout<<"qoniqarli";
		break;
case 4 : cout<<"yaxshi";
		break;
case 5 : cout<<"a'lo";
		break;

default : cout<<"bunday .... yo'q";
}
return 0;
}

// switch(x)
// case 1,2..:
// a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
