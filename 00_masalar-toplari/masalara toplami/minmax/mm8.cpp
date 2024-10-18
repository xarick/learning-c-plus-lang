#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main() {
int n,m,v,min,min2,min_orni=1,min2_orni=1;
cin>>n;
cin>>m;
min=m;
min2=m;
for(int i=2; i<=n; i++)
{
	cin>>m;
	if(min>m) 
	{
		min=m;
		min_orni=i;
	}
	
	if(min2>=m) 
	{
		min2=m;
		min2_orni=i;
	}
}
cout<<"min_orni= "<<min_orni<<endl;
cout<<"min2_orni= "<<min2_orni<<endl;
return 0;
}

// ->
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
// continue; da oshi sonni qoldirib misolni davom etadi yani continue; dan keyin sikl tugab tashqaridagi sikl davometadi. 
// break; da esa siklni tugatadi 
// Xarick__07
