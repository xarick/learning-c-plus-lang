#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
float a,b,c;
bool x;
cin>>a>>b>>c;
x= ((a<b+c) && (b<a+c) && (c<a+b));

cout<<x;
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
