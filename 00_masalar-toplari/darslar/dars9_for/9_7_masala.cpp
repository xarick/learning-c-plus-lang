#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
int m=0;
cout<<"n= "; cin>>n;
for (int i=2; i<n; i++)
{   int s=0;
	for(int k=2; k<i; k++)
	{ 
		if(i%k==0)
		{
			s++;
		}
	}
	if(s==0)
	{
		cout<<" i= "<<i<<"\n";
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
