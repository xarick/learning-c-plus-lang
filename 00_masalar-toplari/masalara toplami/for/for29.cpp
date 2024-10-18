#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
int n,m;
float a,b,c,d,s=0;
cout<<"n= "; cin>>n;
cout<<"a= "; cin>>a;
cout<<"b= "; cin>>b;
c=fabs(b-a);
d=c/n; // d kesma uzunligi   
cout<<"kesma uzunligi= "<<d<<endl;
s=d;
for(int i=1; i<=n; i++)
{
	if(b<a)
	{
		s+=b;
		cout<<s<<endl;
	}
	if(a<b)
	{
		s+=a;
		cout<<s<<endl;
	}
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
