#include <iostream>
#include <math.h>
using namespace std;
int main(){

int a,b,c;
cout<<"a= "; cin>>a;
cout<<"b= "; cin>>b;
bob:
cout<<a<<" ";
a++;
if(a<=b)
{
	goto bob;
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
