#include <iostream>
#include <math.h>
using namespace std;
int main(){
float x,a,b,c,d;
float const pi=3.14;
float m,n,k=0;
float min,max;
float x1,y1,x2,y2,x3,y3,x4,y4;
cin>>x;
if(x>0)
{
	cout<<"0";
}
if((x>=0 && x<1) || (x>=2 && x<3)) 
	{
		cout<<"1";
	}
if((x>=1 && x<2) || (x>=3 && x<4)) 
{
	cout<<"-1";
}
return 0;
}
//   a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
