#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
int a,b,c,d,n;
bool x;
cin>>a>>b>>c;
x=((a*a==b*b+c*c) ||(b*b==a*a+c*c) || (c*c==a*a+b*b));
cout<<x<<endl;
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>  <=> setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
