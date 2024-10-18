#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
int n, ishora=-1;
float x, maxraj, surat, s=0;
float const pi=3.1415;
cout<<"n="; cin>>n;
cout<<"x="; cin>>x;
x=x*pi/180;
surat=x*x;
maxraj=2;
s=1-surat/maxraj; // yig'indi boshlang'ich qiymati 
for(int i=2; i<=n; i++)
{
	ishora*=-1;
	surat*=x*x;
	maxraj*=(2*i-1)*2*i;
	s+=ishora*surat/maxraj;
	cout<<surat<<" / "<<maxraj<<endl;
	
}
cout<<"s= "<<s<<endl;

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
