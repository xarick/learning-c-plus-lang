#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	int a,b;
	int j=0;
cout<<"a= "; cin>>a;
// cout<<"b= "; cin>>b;
// cout<<a<<"\n"<<b<<endl;

for(int i=1; i<=10; i++)
{
	 j++;
	cout<<i<<"= "<<i*a<<endl;
}
cout<<"j= "<<j<<endl;
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
