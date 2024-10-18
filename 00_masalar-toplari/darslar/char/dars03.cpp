
#include <iostream>
#include <conio.h> 
using namespace std;

int main(){
    
char c;

do{
   c=getche();
   cout<<"->"<<(int)c<<endl;

}while(c!='q');

getchar(); getchar();
system("PAUSE");
return 0;
}

// ->
// char
// char s[s];
// s="salom"; 
// cout<<sizeof(s) - > 20;
// couut<<strlen(s)- > 5;
// bularga string.h kutubhon qoshialdi
// strlen satr uzunligini aniqlash
// strcpy, ctrncpy - satrdan nusha olish
// strcat, strncat - satrlarni qoshish (ulash)
// strcmp, strncmp - satrlarni solishtirish
// strstr - qidirish uchun ishlatiladi
// strtok - satrni qismlarga ajrarish
// char satr[15];
// cin.getline(satr,  15); cin.getline(satr, sizeof(satr));
// satr ohiiri '\0' belgisi bilan tugaaedi
// c=getche(); belgi kiritish  buning uchun #include <conio.h>
// for(char i='a'; i<='z'; i++) cout<<"->"<<(int)i<<endl;
// for(int i=65; i<=90; i++) cout<<i<<"->"<<(char)i<<endl;
// matritsalar
// a[100][100]; statik matritsa elon qilish.
// dinamik matritsa elon qilish **a => new int *[satrlar_soni];
// har bir satrga takrorlash yordamida boshlangich qiymat beriladi
// for() => a[i]=new int [ustunlarr soni];
// siklni ochirish for(int i=0; i<satrlar soni; i++) 
// delete [] a[i]; avvalsatrlar ochiriladi
// delete []a; keyin massiv ochiriladi.
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
// setfill('0') no'l bilan toldiradi agar son bolmasa 
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
// => printf("%.3f",s); buning uchun shu kutubhona kerak #include <stdio.h> #include <stdlib.h> kutubhona kerak
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
