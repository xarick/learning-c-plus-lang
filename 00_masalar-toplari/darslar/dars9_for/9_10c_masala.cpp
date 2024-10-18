#include <iostream>
#include <math.h>
using namespace std;
int main(){
float n;
double s=1;
cin>>n;
for(double i=1; i<=n; i++)
{
	s=(s*(1+1/(i*i)));
}
cout<<s<<endl;

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
