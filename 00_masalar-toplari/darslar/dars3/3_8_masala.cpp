// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
float a,b,c,d;
int butun;
cin>>a>>b;
butun= (int)a/(int)b;

c=a/b-(float(butun)) ;

cout<<butun<<endl;
cout<<setprecision(4)<<fixed<<c<<endl;
return 0;
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                       
