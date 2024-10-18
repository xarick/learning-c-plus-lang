#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
float s=0;
cout<<"n= "; cin>>n;
for (int i=1; i<=n; i++)
{
	if(i%3==0 && i%5!=0)
	{
	  // s=s+i;
	  cout<<i<<"\t";
	}
}
return 0;
}

// -> 
// 1000000 => 1E+6;
// switch(x)
// case 1,2..:
// a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
