#include <iostream>
#include <math.h>
using namespace std;
int main(){
int x,a,b,c,d;
float const pi=3.14;
float m,n,k=0;
float min,max;
float x1,y1,x2,y2,x3,y3,x4,y4;
cin>>x;
if(x%2==0 && x/100>=1 && x/100<10)
{
	cout<<"juft va 3 honali son";
}
if(x%2==1 && x/100>=1 && x/100<10)
{
	cout<<"toq va 3 honali son";
}
if(x%2==0 && x/10>=1 && x/10<10)
{
	cout<<"juft va 2 honali son";
}
if(x%2==1 && x/10>=1 && x/10<10)
{
	cout<<"toq va 2 honali son";
}
if(x%2==0 && x>=1 && x<10)
{
	cout<<"juft va 1 honali son";
}
if(x%2==1 && x>=1 && x<10)
{
	cout<<"toq va 1 honali son";
}
return 0;
}
//   a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
