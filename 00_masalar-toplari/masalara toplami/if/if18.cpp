#include <iostream>
#include <math.h>
using namespace std;
int main(){
float a,b,c,d;
float m,n,k=0;
float min,max;
cin>>a>>b>>c;
k++;
if(a!=b && a!=c)
{	
	cout<<k<<endl;
}
k++;
if(b!=a && b!=c)
{
	cout<<k<<endl;
}
k++;
if(c!=a && c!=b)
{
	cout<<k<<endl;
}
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
