#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
int a,b,c;
bool x;
cin>>a>>b;

x=(((a%2==1) && (b%2==0)) || ((a%2==0) && (b%2==1)));
cout<<x<<endl; 


}

// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish

