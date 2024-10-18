#include <iostream>
#include <math.h>
using namespace std;
int main(){
int n;
int m=0;
cout<<"n= "; cin>>n;
for (int c=1; c<=n; c++)
{   
	for(int b=1; b<c; b++)
	{
	
		for(int a=1; a<b; a++)
		{ 
			if(c*c==b*b+a*a)
			{
				cout<<a<<"\t"<<b<<"\t"<<c<<endl;
			}
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
