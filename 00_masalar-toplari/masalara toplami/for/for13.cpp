#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
	float a,b,m,k;
	float j=0,s=0,x=1.1;
	int ishora=1,n;
cout<<"n= "; cin>>n;
// cout<<"b= "; cin>>b;
// cout<<a<<"\n"<<b<<endl;

for(; ;)
{
	s+=ishora*x;
	x+=0.1;
	n--;
	ishora*=-1;
	if(n<=0) break;
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
