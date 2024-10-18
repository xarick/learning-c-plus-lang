#include <iostream>
#include <math.h>
using namespace std;
int main(){
int a,b,c;
char n;
cin>>a>>b;
cout<<"qoshish uchun - q"      <<endl;
cout<<"ayrish uchun - a"       <<endl;
cout<<"kopaytirish uchun - k"  <<endl;
cout<<"bolish uchun - b"       <<endl;
cin>>n;

switch(n){
case 'q' : cout<<a+b<<endl; break; 
case 'a' : cout<<a-b<<endl; break; 
case 'k' : cout<<a*b<<endl; break; 
case 'b' : cout<<a/b<<endl; break; 
default : cout<<"bunday .. yoq";

}


return 0;
}

// switch(x)
// case 1,2..:
// a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
