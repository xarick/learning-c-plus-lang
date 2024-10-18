#include <iostream>
#include <math.h>
using namespace std;
int main(){
int d,m,n;
cout<<" d= "; cin>>d;
cout<<" m= "; cin>>m;

switch(m)
{
	case 1: cout<<d<<" -yanvar " <<endl; break;
	case 2: cout<<d<<" -fevral " <<endl; break;
	case 3: cout<<d<<" -mart "   <<endl; break;
	case 4: cout<<d<<" -aprel "  <<endl; break;
	case 5: cout<<d<<" -may "    <<endl; break;
	case 6: cout<<d<<" -iyun "   <<endl; break;
	case 7: cout<<d<<" -iyul "   <<endl; break;
	case 8: cout<<d<<" -avgust " <<endl; break;
	case 9: cout<<d<<" -sentabr "<<endl; break;
	case 10: cout<<d<<" -oktabr "<<endl; break;
	case 11: cout<<d<<" -noyabr "<<endl; break;
	case 12: cout<<d<<" -dekabr "<<endl; break;
	
}


return 0;
}
// 1000000 => 1E+6;
// switch(x)
// case 1,2..:
// a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
