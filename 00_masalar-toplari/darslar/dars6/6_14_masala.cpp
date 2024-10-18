#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a,b,c,d,x1,x2;
	float max=0,min=0;
	float x,y,z;
	cin>>a>>b>>c>>x>>y;
	if(a<=x && b<=y || b<=x && a<=y)
	{
		cout<<"true"<<endl; return 0;
	}
	if(b<=x && c<=y || c<=x && b<=y)
	{
		cout<<"true"<<endl; return 0;
	}
	if(c<=x && a<=y || a<=x && c<=y)
	{
		cout<<"true"<<endl; return 0;
	}
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
