// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
float a,b,c,r;
int k=0; 
ola: 
 k++;
cin>>a>>c;
b=sqrt(c*c-a*a);
r=(a+b+c)/(a*b);
cout<<b<<endl;
cout<<setprecision(2)<<fixed<<b<<endl;
cout<<endl;
cout<<r<<endl;
cout<<setprecision(2)<<fixed<<r<<endl;
if(k==3){return 0;}

goto ola;
return 0;
}
