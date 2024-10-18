#include <iostream>
#include <math.h>
using namespace std;
int main(){
float a,b,c,d;
float m,n,k=0;
float min,max;
float x1,y1,x2,y2,x3,y3,x4,y4;
cin>>x1>>y1;
if(x1>0 && y1>0)
{
	cout<<"1-chorak";
}
if(x1<0 && y1>0)
{
	cout<<"2-chorak";
}
if(x1<0 && y1<0)
{
	cout<<"3-chorak";
}
if(x1>0 && y1<0)
{
	cout<<"4-chorak";
}
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
