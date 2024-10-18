#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
int m=0;
cout<<"n= "; cin>>n;
for (int i=1; i<n; i++)
{   float s=0;
	for(int k=1; k<i-1; k++)
	{ m++;
		if(i%k==0)
		{
			s=s+k;
		}
	}
	if(s==i)
	{
		cout<<" i= "<<i<<"\t";
	}
	
	
}
cout<<"m= "<<m;
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
