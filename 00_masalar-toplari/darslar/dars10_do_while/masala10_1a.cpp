#include <iostream>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
#include <ctime>
using namespace std;
int main() {
	int n,k=1;
	float s1=0,s2=0,s3=0;
	cin>>n;
	do{
		s1+=1/(float)k;
		s2+=1/(float)pow(k,5);
		s3+=1/(float)(2*k+1)*(2*k+1);
		k++;
	}while (k<=n);
cout<<s1<<endl;
cout<<s2<<endl;
cout<<s3<<endl;
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
