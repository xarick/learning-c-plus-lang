#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
int n, ishora=1;
float x, maxraj=1,surat, s=1;
cout<<"n="; cin>>n;
cout<<"x="; cin>>x;
s=x; // yigindininng boshlang'ich qiymati
for(int i=3; i<=n; i++)
{
	ishora*=-1;
	surat=1;
	maxraj=1;
	for(int j=1; j<=i; j++)
	{
		surat*=x;
		maxraj*=j;
	}
	s+=ishora*surat/maxraj;
	cout<<surat<<" / "<<maxraj<<endl;
	
}
cout<<"natija= "<<s<<endl;

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
