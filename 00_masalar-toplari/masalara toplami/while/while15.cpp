#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main() {
float boshi,summa,s,foiz;
int oy=0;
cin>>s>>foiz;
foiz=foiz/100;
boshi=2*s;
while(s<boshi)
{
	s+=s*foiz;
	oy++;
}
cout<<oy<<endl<<s<<endl;
return 0;
}

// ->
// tasodifiy son uchun #include <stdlib.h> kutubhonasi qoshiladi.
// x=rand % n + 1; x-> n gacha bo'lgan tasodifiy son 
// har doim har hil chiqarish uchun # include <ctime> kutubhona va srand(time(NULL)); qoshiladi
// s ni butundan keyin 3 ta qoldirib qoganini tashlab yuborish
// => printf("%.3f",s); kutubhona #include <stdio.h>
// 1000000 => 1E+6;
// switch(x)
// case 1,2..:
// a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi.
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi.
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07