#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	int s=0,n,k;
cout<<"n= "; cin>>n;
// cout<<"k= "; cin>>k;
for(int i=1; i<=n; i++)
{
	int l=n-i+1;
	int p=1;
	for(int j=1; j<=l; j++)
	{
		p*=i;
	}
	s+=p;
}
cout<<s<<endl;
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
