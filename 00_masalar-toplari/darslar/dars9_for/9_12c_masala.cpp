#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
int a,n;
float k,m,s=1,s1=0,s2=0,s3=0;
cout<<"n= "; cin>>n; 
cout<<"a= "; cin>>a; 
for (int i=0; i<=n; i++)
{
		s*=(a-1*n);
}
cout<<s<<endl;
cout<<setprecision(2)<<fixed<<s<<endl;
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
