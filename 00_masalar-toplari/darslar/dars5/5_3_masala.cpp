#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
int a,b,c;
bool x;
cin>>a>>b;
x = ((a<0) && (b>0)) || (a>0 && (b<0));

cout<<x<<endl; 


}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish

