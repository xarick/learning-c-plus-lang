#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
int i,j,s,c;
int m=0;
cout<<"n= "; cin>>n;

for(i=1; i<=n; i++)
{
	s=0;
	// i soni bolivchilar yigindisi s
	for(int j=1; j<i; j++)
	{
		if(i%j==0)
		{
			s=s+j;
		}
	}
	if(s>i)
	{
		c=0;
		// s soni bolivchilari yigindisi c
		for(j=1; j<s; j++)
		{
			if(s%j==0)
			{
				c=c+j;
			}
		}
		if(c==i)
		{
			cout<<i<<"\t"<<s<<endl;
		}
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
