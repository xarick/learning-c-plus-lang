// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
float a,d,n,s;
int k=0; 
ola: 
 k++;
cin>>a>>d>>n;

s=(2*a+d*(n-1))*n/2;
cout<<s<<endl;
if(k==3){return 0;}

goto ola;
return 0;
}
