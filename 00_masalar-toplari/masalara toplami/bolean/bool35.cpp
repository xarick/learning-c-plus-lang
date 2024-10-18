#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
int a,b,c,d,n;
bool x;
cin>>a>>b>>c>>d;
x=((a+b)%2 == (c+d)%2);
cout<<x<<endl;
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>  <=> setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
