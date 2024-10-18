#include <iostream>
#include <math.h>
using namespace std;
int main(){
float a,b,c,d;
float m,n,k;
float min,max;
cin>>a>>b>>c;

if(a>b && b>c)
{
	cout<<2*a<<" "<<2*b<<" "<<2*c<<endl;
}
else 
{
	a=-a; b=-b; c=-c;
	cout<<a<<" "<<b<<" "<<c<<endl;
}
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
