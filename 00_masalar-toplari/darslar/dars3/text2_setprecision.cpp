
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// setprecision(x)  verguldan keyin x hona aniqlikda ekranga chiqarish
#include <iostream>
#include <iomanip>
using namespace std;
int main(){
float a,b;
cin>>a>>b;
a=a/b;

cout<<a<<endl;
cout<<setprecision(2)<<fixed<<a<<endl;

return 0;
}
