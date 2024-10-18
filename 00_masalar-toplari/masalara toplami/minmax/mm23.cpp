#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main() {
int n,max1,max2,max3,a;
bool bob=false;
cin>>n;
cin>>max1;
cin>>max2;
cin>>max3;
if(max2<max3)
{
	int k=max2;
	 max2=max3;
	 max3=k;
}

if(max1<max2)
{
	int k=max2;
	 max2=max1;
	 max1=k;
}
if(max2<max3)
{
	int k=max2;
	 max2=max3;
	 max3=k;
}
for(int i=4; i<=n; i++)
{
	cin>>a;
	if(max1<a)
	{
		max3=max2;
		max2=max3;
		max1=a;
	}
	else 
		{
	
		if(max2<a  && a<max1)
		{
			bob=true;
			max3=max2;
			max2=a;
		}
		// esle
		if(bob)
		{
			if(max2>a&& a>max3)
			{
				max3=a;
			}
		}
		}
}
cout<<endl;
cout<<max3<<"\n"<<max2<<"\n"<<max1<<endl;
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
