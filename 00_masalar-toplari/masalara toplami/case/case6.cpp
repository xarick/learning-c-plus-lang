#include <iostream>
#include <math.h>
using namespace std;
int main(){
int a,b,c;
char n;
cout<<"sonni metrda  bering= ";
cin>>a;
cout<<"detsimetr uchun 1 "<<endl;
cout<<"kilometr uchun 2 "<<endl;
cout<<"metr uchun 3 "<<endl;
cout<<"millmetr uchun 4 "<<endl;
cout<<"santimetr uchun 5 "<<endl;

cin>>b;
switch(b){
case 1 : cout<<a*10<<endl; break; 
case 2 : cout<<a/1000<<endl; break; 
case 3 : cout<<a<<endl; break; 
case 4 : cout<<a*1000<<endl; break; 
case 5 : cout<<a*100<<endl; break;
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
