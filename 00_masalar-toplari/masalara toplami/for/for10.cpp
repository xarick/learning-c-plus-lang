#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	float a,b,n;
	float j=0,s=0;
cout<<"n= "; cin>>n;
// cout<<"b= "; cin>>b;
// cout<<a<<"\n"<<b<<endl;

for(float i=1; i<=n; i++)
{
	 j++;
	 s=s+1/i;
//	cout<<i<<"= "<<i*a<<endl;
}
cout<<"s= "<<s<<endl;
cout<<ceil(s)<<endl;
cout<<floor(s)<<endl;
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
