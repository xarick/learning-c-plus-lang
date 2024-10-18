#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float x,y,z;
	float max=0,min=0;
	cin>>x>>y>>z;

if(x>=y && y>=z)
{
	cout<<2*x<<" "<<2*y<<" "<<2*z<<endl;
}
else 
{
	cout<<fabs(x)<<" "<<fabs(y)<<" "<<fabs(z)<<endl;
}

return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
