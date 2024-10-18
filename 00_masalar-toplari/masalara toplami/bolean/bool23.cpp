#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
int a,b,c,d;
bool x;
cin>>a;

b=a/100;
c=(a-b*100)/10;
d=(a-b*100)%10;
cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
x=(b==d);
cout<<x<<endl;
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>  <=> setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
