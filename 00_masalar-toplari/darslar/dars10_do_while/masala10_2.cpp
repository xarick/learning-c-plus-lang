#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main() {
	int n,i=0,p=1;
	float x, s=0,daraja=1; 
	cin>>n;
	cin>>x;
	daraja=1;
	do{
	i++;
	p*=i;
	daraja*=x;
	s+=daraja/p;
	}while (i<=n);
cout<<s<<endl;
// cout<<s2<<endl;
// cout<<s3<<endl;
return 0;
}

// ->
// tasodifiy son uchun #include <stdlib.h> kutubhonasi qoshiladi.
// x=rand % n + 1; x-> n gacha bo'lgan tasodifiy son 
// har doim har hil chiqarish uchun # include <ctime> kutubhona va srand(time(NULL)); qoshiladi
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
