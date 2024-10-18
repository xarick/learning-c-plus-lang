// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
int a,b,c,d;
cin>>a;;
b=a/3600;
c=(a-b*3600)/60;
d=a%60;

cout<<b<<endl;
cout<<c<<endl;
cout<<d<<endl;
return 0;
}
