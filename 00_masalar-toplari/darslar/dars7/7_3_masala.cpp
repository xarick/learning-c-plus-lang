#include <iostream>
#include <math.h>
using namespace std;
int main(){
int a;
cin>>a;

switch(a){
case 1 : cout<<"1.dekabr\n2.yanvar\n3.fevral";
		break;
case 2 : cout<<"1.mart\n2.aprel\n3.may";
		break;		
case 3 : cout<<"1.iyun\n2.iyul\n3.avgust";
		break;
case 4 : cout<<"1.sentabr\n2.oktabr\n3.noyabr";
		break;
default : cout<<"bunday ..... yo'q";
}
return 0;
}

// switch(x)
// case a:
// a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
