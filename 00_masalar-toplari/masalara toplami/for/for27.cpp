#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
int n,surat=1,maxraj=1;
float daraja,x,s;
cout << "n="; cin >> n;
cout<<"-1 < x < 1 son oralig'ifa sin kiriting \n ";
cout<<"x="; cin>>x;

if(x==0)
{
	cout<<"bosh toplam !!!";
	return 0;
}
s=x;
daraja=x;
for(int i=1; i<=n;i++)
{
	daraja*=x*x;
	surat=2*i-1;
	maxraj*=i*2;
	s+=daraja*surat/(maxraj*(2*i+1));
	cout<<i<<endl;
	
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
