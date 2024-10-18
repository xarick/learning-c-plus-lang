#include <iostream>
#include <math.h>
using namespace std;
void minmax(int x, int y)
{
	if(y>x)
	{
		int k=x;
		x=y;
		y=k;
	}
	cout<<x<<" "<<y;
}
 int main() {
int a,b,c,d;
cin>>a>>b;
minmax(a,b);
return 0;
}

// ->
// funksiyalar 
//setfill('0') no'l bilan oldiradi agar son bolmasa 
// bular uchun ham #include <iomanip> kutubhona kerak
// setw(2) 2 ta honagacha bu cout<<setfill('0')<<setw(2)<<endl;
// bular setprecision(verguldan keyin n ta) << fixed << a; ga ohshash.
// global ozgaruvchilar int main() dan tashqarida boladi va :: x tarzida chaqiriladi
// cout<<::x<<endl;
// korsatgichlar bilan ishlash
// n=5 -> nptr=&n -> nptr=0x22ff44
// n=15 *nptr=n; -> *nptr=15;
// korsatgich joylashgan adres &nptr=0x22fe30
// tasodifiy son uchun #include <stdlib.h> kutubhonasi qoshiladi.
// x=rand % n + 1; x-> n gacha bo'lgan tasodifiy son 
// har doim har hil chiqarish uchun # include <ctime> kutubhona va srand(time(NULL)); qoshiladi
// s ni butundan keyin 3 ta qoldirib qoganini tashlab yuborish
// => printf("%.3f",s); buning uchun shu kutubhona kerak #include <stdio.h>
// 1000000 => 1E+6;
// switch(x)
// case 1,2..:
// a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi.
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi.
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// continue; da oshi sonni qoldirib misolni davom etadi yani 
// continue; dan keyin sikl tugab tashqaridagi sikl davom etadi. 
// break; da esa siklni tugatadi 
// Xarick__07
