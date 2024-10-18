#include <iostream>
#include <math.h>
using namespace std;
int main(){
int k,n;
char y;
cout<<"yonalishni tanlang\nshimol -> s\njanub -> j\nsharq-> q\ngarb-> g\n ";
cin>>y;
cout<<endl;
cout<<" harakatni tanlang \n0 -> hrakatni davom ettir \n1 -> chapga buril\n2 -> onnga buril "<<endl;
cin>>k;
cout<<"ikkinchi komandani tanlang ";
cin>>n;
switch(y)
{
	case 's': cout<<" shimolga "; break;
	case 'j': cout<<" janubga "; break;
	case 'q': cout<<" sharqa "; break;
	case 'g': cout<<" garbga "; break;
	default :cout<<"bunday ... yoq ";
}



switch(k)
{
	case 0 :cout<<"onga buril "; break;
	case 1 :cout<<"chapga buril "; break;
	case 2 :cout<<"180C ga buril "; break;
}
switch(n)
{
	case 0 :cout<<"onga buril "; break;
	case 1 :cout<<"chapga buril "; break;
	case 2 :cout<<"180C ga buril "; break;
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
