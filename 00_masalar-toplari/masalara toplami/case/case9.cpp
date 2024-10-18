#include <iostream>
#include <math.h>
using namespace std;
int main(){
int d,m,n;
cout<<" d= "; cin>>d;
cout<<" m= "; cin>>m;
d++; // keyingi kun
switch(m)
{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: // 31 dan katta bolsa, oyni oshiramiz:
		if(d>31)
		{
			d=1;
			m++;
		} break;
	case 2: // 28 dan katta bolsa oshiramiz
		if(d>28)
		{
			d=1;
			m++;
		} break;
	case 4:
	case 6:
	case 9:		
	case 11: // 30dan katta bolsa oyni  oshiramiz
		if(d>30)
		{
			d=1;
			m++;
		} break;
default : { cout<<" bunday oy yoq"; }
}
m=m%12; // 12 ga bolib qodiqni olamiz
switch(m)
{
	case 1: cout<<d<<" -yanvar oyi" <<endl; break;
	case 2: cout<<d<<" -fevral oyi" <<endl; break;
	case 3: cout<<d<<" -mart oyi"   <<endl; break;
	case 4: cout<<d<<" -aprel oyi"  <<endl; break;
	case 5: cout<<d<<" -may oyi"    <<endl; break;
	case 6: cout<<d<<" -iyun oyi"   <<endl; break;
	case 7: cout<<d<<" -iyul oyi"   <<endl; break;
	case 8: cout<<d<<" -avgust oyi" <<endl; break;
	case 9: cout<<d<<" -sentabr oyi"<<endl; break;
	case 10: cout<<d<<" -oktabr oyi"<<endl; break;
	case 11: cout<<d<<" -noyabr oyi"<<endl; break;
	case 12: cout<<d<<" -dekabr oyi"<<endl; break;
	
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
