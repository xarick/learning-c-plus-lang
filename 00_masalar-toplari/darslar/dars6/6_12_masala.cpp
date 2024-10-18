#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a,b,c,d,e;
	float max=0,min=0;
	cin>>a>>b>>c>>d;

if(d>=c && c>=b && b>=a)
{
	c=d; b=d; a=d;
	cout<<d<<" "<<c<<" "<<b<<" "<<a<<endl;
	
}else 
{
if(a>b && b>c && c>d)
{
	cout<<d<<" "<<c<<" "<<b<<" "<<a<<endl;
}
	else 
		{
			cout<<d*d<<" "<<c*c<<" "<<b*b<<" "<<a*a<<endl;
		}
}
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
