#include <iostream>
#include <math.h>
using namespace std;
int main(){
float n;
double s=0;
cout<<"n= "; cin>>n; 
for (int i=n; i>=1; i--)
{
	s=sqrt(2+s);
}
cout<<s<<endl;
s=0;
for (int j=n; j>=1; j--)
{
	s=sqrt(3*j+s);
}
cout<<s<<endl;

 // printf("%.3f",s);
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
