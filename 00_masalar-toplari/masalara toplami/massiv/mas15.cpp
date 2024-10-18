#include <iostream>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
 int main(){
int n,a[100],b[100],c[100],k=0;
int d=0,f=0;
   cin>>n;

   for(int i=0; i<n; i++)
     cin>>a[i];
   
  
  for(int i=1; i<n; i+=2)
   {
      cout<<a[i]<<" ";
   }
    cout<<endl;
    for(int i=n-2; i>=0; i-=2)
   {
      cout<<a[i]<<" "; 
   }
  
getch();
return 0;
}

// ->
// massivlar
// C++ da dinamik massiv hosil qilish\/
// int *a; korsatkich elon qilamiz va a=new int[n]
// hotirani boshatish uchun delete []a;
// C stilida dinamik massiv hosil qilish 
// int *a -> va pastdan a=(int*) malloc(n*sizeof(int)); \/
// bunga kereyli kutubhona #include <alloc.h>
// dinamik massivdan foydalanganda dastur ohirida hotirani  boshatamiz -> free(a);
// massiv elementlar sonini aniqlash cout<<sizeof(a)/sizeof(int);
// massiv elementini hotirada turgan orni ni olish &a[i]; bunay boladi
// massivlarni chiqarishda cout<<a[i]; bolsa
// korsatkich shaklida cout<<*(a+i); bunday boladi
// makroslar
// #define KOPAYTMA (a, b) (a) * (b)
// int a,b,b,c; cin>>a>>b; c=KOPAYTMA(a,b); cout<<c<<endl; agar a=2 b=3 b-sa c=6 chiqadi;
// funksiyalar 
// funksiya 2 xil bo'lib int tipi va void tipi 
// void da hech nima qaytarilmaydi int da return qilib qaytaradi
//setfill('0') no'l bilan toldiradi agar son bolmasa 
// bular uchun ham #include <iomanip> kutubhona kerak
// setw(2) 2 ta honagacha bu cout<<setfill('0')<<setw(2)<<endl;
// bular setprecision(verguldan keyin n ta) << fixed << a; ga ohshash.
// global ozgaruvchilar int main() dan tashqarida boladi va :: x tarzida chaqiriladi
// cout<<::x<<endl;
// korsatgichlar bilan ishlash
// n=5 -> nptr=&n -> nptr=0x22ff44
// n=15 *nptr=n; -> *nptr=15;
// korsatgich joylashgan adres &nptr=0x22fe30
// tasodifiy son uchun #include <stdlib.h> kutubhonasi qoshiladi.
// x=rand % n + 1; x-> n gacha bo'lgan tasodifiy son 
// har doim har hil chiqarish uchun # include <ctime> kutubhona va srand(time(NULL)); qoshiladi
// s ni butundan keyin 3 ta qoldirib qoganini tashlab yuborish
// => printf("%.3f",s); buning uchun shu kutubhona kerak #include <stdio.h>
// 1000000 => 1E+6;
// switch(x)
// case 1,2..:
// a*180/pi;
// ceil(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin katta burun songa aytiladi.
// floor(x) => haqiqiy toifadagi x o'zgaruvchisi qiymatini unga eng yaqin kichik burun songa aytiladi.
// #include <iomanip>
// setprecision(verguldan keyin n ta) << fixed << a; verguldan keyin x hona aniqlikda ekranga chiqarish
// continue; da oshi sonni qoldirib misolni davom etadi yani 
// continue; dan keyin sikl tugab tashqaridagi sikl davom etadi. 
// break; da esa siklni tugatadi 
// Xarick__07
