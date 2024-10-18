#include <iostream>
#include <math.h>
using namespace std;
int main(){
float a,b,c,d,k;
float min,max;
cin>>a>>b>>c;
if(a>b && a>c)
{
	max=a;	
}
if(a<b && a<c)
{
	min=a;	
}
if(b>a && b>c)
{
	max=b;	
}
if(b<a && b<c)
{
	min=b;	
}
if(c>b && c>a)
{
	max=c;	
}
if(c<b && c<a)
{
	min=c;	
}
cout<<(min+max)/2;
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
