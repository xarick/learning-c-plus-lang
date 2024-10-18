#include <iostream>
#include <math.h>
using namespace std;
int main(){
float a,b,c,d;
cin>>a>>b>>c;
int k=0;
if(a>0)
{
	k++;
}
if(b>0)
{
	k++;
}
if(c>0)
{
	k++;
}
cout<<k<<endl;
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
