#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
int a,b,c,d;
bool x;
cin>>a>>b>>c;

d=b*b-4*a*c;
x=(d>=0);
cout<<x<<endl;
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>  <=> setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
