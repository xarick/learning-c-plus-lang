#include <iostream>
#include <math.h>
using namespace std;
int main(){
float a,b,c,d;
float m,n,k;
float min,max;
cin>>a>>b>>c;

m=a+b; n=a+c; k=b+c;
if(m>n)
{
	if(m>k)
	{
		cout<<m<<endl;
	}

}
else
	{
		if(n>k)
		{
			cout<<n<<endl;
		}
		else 
		{
			cout<<k<<endl;
		}
	}
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
