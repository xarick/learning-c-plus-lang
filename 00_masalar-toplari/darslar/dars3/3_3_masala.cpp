
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// setprecision(x) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
float a,b,c,p,s;
ola: 
int k=0; k++; 
cin>>a>>b>>c;
p=(a+b+c)/2;
s=sqrt(p*(p-a)*(p-b)*(p-c));
cout<<p<<endl;
cout<<setprecision(2)<<fixed<<p<<endl;
cout<<endl;
cout<<s<<endl;
cout<<setprecision(2)<<fixed<<s<<endl;
if(k==3)return 0;
goto ola;
return 0;
}
