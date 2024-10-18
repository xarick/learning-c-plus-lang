#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	int s=0,a,b;
	cout<<" a < b son kriting:\n";
cout<<"a= "; cin>>a;
cout<<"b= "; cin>>b;
for(int i=1; i<=b; i++)
{
	
	for(int j=1; j<=i; j++)
	{
		cout<<i<<" ";
	}
cout<<endl;
}

return 0;
}

// ->
// s ni butundan keyin 3 ta qoldirib qoganini tashlab yuborish
// => printf("%.3f",s);
// 1000000 => 1E+6;
// switch(x)
// case 1,2..:
// a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi.
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi.
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
