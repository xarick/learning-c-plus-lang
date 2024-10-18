#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	int n,m;
	float a,b,c,d,s=0;
	float f,f1,f2;
	cout<<"n= ";
	cin>>n;
	f1=f2=1;
	for(int i=3; i<=n; i++) {
		if(i==1 || i==2)
			f=1;

		else f=f1+f2;

		cout<<f<<" ";
		// yangi qiymatla o'zlashtiriladi.
		f2=f1;
		f1=f;
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
