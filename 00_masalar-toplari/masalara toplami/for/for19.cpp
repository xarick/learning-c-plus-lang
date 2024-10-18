#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	int b,n,k;
	float a=1,j=0,s=1;
cout<<"n= "; cin>>n;
// cout<<"a= "; cin>>a;
// cout<<"b= "; cin>>b;


for(int i=1; i<=n; i=i+1)
{
	s=s*i;

	j++;

//	cout<<i<<"= "<<i*a<<endl;
}
cout<<"s= "<<s<<endl;
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
