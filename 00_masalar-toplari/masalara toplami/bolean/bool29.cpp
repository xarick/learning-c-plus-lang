#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
int x,y,x1,y1,x2,y2,n;
cin>>x>>y>>x1>>y1>>x2>>y2;
x=(x>x1 && x<x2) && (y>y1 && y<y2);
cout<<x<<endl;
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>  <=> setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
