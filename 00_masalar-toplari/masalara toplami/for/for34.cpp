#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main() {
	int n,m;
	float b,c,d,s=0;
	float a,a1,a2;
	cout<<"n= ";
	cin>>n;
	a1=1;
	a2=2;
	for(int i=1; i<=n; i++) {
	if(i==1)a=1;
	else if(i==2) a=2;
			else a=(a1+2*a2)/3;

		cout<<a<<endl;
		// yangi qiymatla o'zlashtiriladi.
		a2=a1;
		a1=a;
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
