#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	int b,n,k;
	float a=1,j=0,s=0;
cout<<"n= "; cin>>n;
cout<<"a= "; cin>>a;
// cout<<"b= "; cin>>b;


for(int i=0; i<=n; i=i+1)
{
	k=pow(a,i);
	k=k*pow(-1,i);
	s=s+k;
	cout<<k<<endl;
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
