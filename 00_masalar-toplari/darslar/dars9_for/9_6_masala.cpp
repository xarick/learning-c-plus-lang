#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
float s=0;
cout<<"n= "; cin>>n;
for (int i=2; i<n; i++)
{
	if(n%i==0)
	{
	  s++;
	  // cout<<i<<"\t";
	}
	
}
if(s==0)
cout<<" tub son "<<endl;

else 
	cout<<"tub son EMAS "<<endl;;

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