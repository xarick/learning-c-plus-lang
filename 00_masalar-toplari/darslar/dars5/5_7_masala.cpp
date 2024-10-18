#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
float a,b,c;
bool x;
cin>>a>>b>>c;
 
x=((c*c==a*a+b*b) || (b*b==a*a+c*c) || (a*a==c*c+b*b));
cout<<x;
return 0;
}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish

