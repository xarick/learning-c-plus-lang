#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
int n,ishora=1;
float daraja = 1,x,s;
cout << "n="; cin >> n;
cout<<"-1 < x < 1 son oralig'ifa sin kiriting \n ";
cout<<"x="; cin>>x;

s=x;
daraja=x;
for(int i=1; i<=n; i++)
{
	
	daraja*=x*x;
	ishora*=-1;
	s+=(ishora*daraja)/(2*i+1);
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
