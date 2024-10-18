#include <iostream>
using namespace std;
int main() {
double n=5;
double *kptr;
// & adresni olish amali 
kptr=&n;
cout<<"\ozgaruvchilar qiymati"<<endl;
cout<<"n= "<<n<<endl;
cout<<"*kptr= "<<*kptr<<endl;
cout<<"xotira adresi "<<endl;
cout<<"n-ozgaruvchisining joylashgan adresi. &n= "<<&n<<endl;
cout<<"korsatgich korsatayotgan adres. *kptr= "<<*kptr<<endl;
cout<<"korsatgich joylashgan adres.  &kptr = "<<&kptr<<endl;
cout<<endl;
cout<<"ozgaruvchilar xotirada egallagan hajmi "<<endl;
cout<<"sizeof(n)= "<<sizeof(n)<<endl;
cout<<"sizeof(kptr)= "<<sizeof(kptr)<<endl;

return 0;
}

// ->
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
// continue; da oshi sonni qoldirib misolni davom etadi yani continue; dan keyin sikl tugab tashqaridagi sikl davometadi. 
// break; da esa siklni tugatadi 
// Xarick__07
