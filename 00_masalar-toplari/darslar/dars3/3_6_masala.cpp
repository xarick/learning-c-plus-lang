// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
float d,x1,x2,y1,y2;
int k=0; 
ola: 
 k++;
cin>>x1>>y1>>x2>>y2;

d=sqrt(pow((x1-x2),2)+pow((y1-y2),2));

cout<<d<<endl;
if(k==3){return 0;}

goto ola;
return 0;
}
