// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
int a;
cin>>a;

cout<<a%100<<a/100;

//cout<<(a%10)<<(a/10)%10<<a/100;

return 0;
}
