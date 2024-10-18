
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// setprecision(x)  verguldan keyin x hona aniqlikda ekranga chiqarish
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
int a;
cin>>a;

cout<<a%10<<" "<<a/10<<" "<<a%10+a/10;
return 0;
}
