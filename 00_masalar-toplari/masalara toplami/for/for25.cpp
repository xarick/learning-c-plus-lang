#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
float n, p=1;
float surat = 1,x, b=1, s=0;
float  ishora=-1;
cout<<"-1 < x < 1 son oralig'ifa sin kiriting \n ";
cout<<"x="; cin>>x;
cout << "n="; cin >> n;
 //  cout<<"x="; cin>>x;

for(float i=1; i<=n; i++)
{
	
	surat*=x;
	ishora*=-1;
	s+=(float)(ishora*surat)/i;
	cout<<s<<endl;
}

cout<<"s= "<<s<<endl;

return 0;
}

// -> 
// s ni butundan keyin 3 ta qoldirib qoganini tashlab yuborish
// => printf("%.3f",s);
// 1000000 => 1E+6;
// switch(x)
// case 1,2..:
// a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi. 
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi. 
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// Xarick__07
