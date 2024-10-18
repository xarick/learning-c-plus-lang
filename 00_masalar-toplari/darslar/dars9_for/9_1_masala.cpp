#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
cout<<"n= "; cin>>n;
for (int i=1; i<=n; i++)
{
	if(n%i==0)
	{
	cout<<i<<"\t";
	}
}

return 0;
}
// 1000000 => 1E+6;
// switch(x)
// case 1,2..:
// a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
