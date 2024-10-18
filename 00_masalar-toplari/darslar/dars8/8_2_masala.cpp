#include <iostream>
#include <math.h>
using namespace std;
int main(){

int a,b,c;
ortga:
cout<<" hafta kunini kiriting :"; 
cin>>a;	
if(a<1 || a>7)
{   cout<<" noto'g'ri kiritish boshqatdan kiriting : "<<endl;
	goto ortga;		
}
cout<<" tabriklaymiz togri !!! "<<endl;

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
