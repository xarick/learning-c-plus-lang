#include <iostream>
#include <math.h>
using namespace std;
int main(){
float a,b,c,d,k;
float min;
cin>>a>>b>>c;

if(a<b)
	{
		if(a<c)
		{
		min=a;	
		}	
	}
else 
	{
		if(b<c)
		{
			min=b;
		}
		else
		{
			min=c;
		}
		
	}
cout<<min;
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
