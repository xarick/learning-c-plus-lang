#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float x,y,z;
	float max=0,min=0;
	cin>>x>>y>>z;

if(x>y && y>z)
{
	cout<<"true";
}
else 
{
	cout<<"false";
}

return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
