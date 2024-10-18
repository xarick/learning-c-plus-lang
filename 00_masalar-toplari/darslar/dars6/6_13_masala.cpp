#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a,b,c,d,x,x1,x2;
	float max=0,min=0;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(d<0)
	{
		cout<<"yechimga ega emas";
	}
	if(d==0)
	{
		x=-b/2*a;
		cout<<x;	
	}
	if(d>0)
	{
		x1=(-b+sqrt(d))/2*a;
		x2=(-b-sqrt(d))/2*a;
		cout<<x1<<" "<<x2;
	}
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
