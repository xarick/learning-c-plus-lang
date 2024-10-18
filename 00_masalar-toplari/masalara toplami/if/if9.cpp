#include <iostream>
#include <math.h>
using namespace std;
int main(){
float a,b,c,d,k;
cin>>a>>b;
if(a>b)
{
	c=a;
	a=b;
	b=c;
}
cout<<a<<" "<<b<<endl;
if(a==b)
{
	cout<<" bu sonlar teng";
}
// cout<<k<<endl;
// cout<<n<<endl;
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
