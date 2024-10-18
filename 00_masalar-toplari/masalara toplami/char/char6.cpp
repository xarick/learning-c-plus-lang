#include <iostream>
#include <stdlib.h> 
#include <conio.h>
#include <ctype.h> 
#include <string.h>  
using namespace std;

int main(){
char n;
cin>>n;

cout<<(int)n<<endl;

for(int i=49; i<=57; i++)
{
  if(i==(int)n)
   {
     cout<<"raqam";
     getch();
     return 0;          
    }
}
for(int i=65; i<=90; i++)
{
   if(i==(int)n)
   {
      cout<<"katta harf";
      getch();
      return 0;          
    }
}  
for(int i=97; i<=122; i++)
{
   if(i==(int)n)
   {
      cout<<"kichik harf";
      getch();
      return 0;  
   } 
   else
   {
       cout<<"raqam ham harf ham emas"<<endl;
       getch();
       return 0;
   }
       
}   
getch(); //getchar();
system("PAUSE");
return 0;
}

// ->
// #include <string.h> <- = -> yoki #include <cstring.h> 
// char
// char s[s];
// itoa(n,on_olti,16); 16 likga otkazish 
// itoa(n,ikki,2); 2 likga otkazish 
// ta1=strtol(sonlar,&pEnd,16);  16 likga otkazish
// atof -> floatga otkazadi 
// atoi -> int ga otkkazadi
// agar biz toifanin alashtirmoqchi bolsek stdlib.h lutubhona qoshiladi
// double atof (const char *c) => c satrni double toifasigga ozgartiradi
// int atoi (const char *c) => c satrni int toifasigga ozgartiradi
// int atol (const char *c) => c satrni long int toifasigga ozgartiradi
// int strtol (const char *c,char **endptr,int base) => c satrni long int toifasigga ozgartiradi
// double strtod (const char *c,char **endptr) => c satrni double toifasigga ozgartiradi
// char *itoa (int n, char *satr,int radix) => n sonini radix sanoq sistemasida satr ozgaruvchisiga ozlashtiradi
// char *gcvt (double n, int k,char *satr) => haqiqiy toifadagi n sonining k ta raqamini satr ozgaruvchisiga ozlashtiradi
// toupper har harfni katta qilishuchun ishlatiladi 
// tolower har harfni kichik qilishuchun ishlatiladi
// belgilarni qayta ishlovchi funksiyalar
// buning uchun ctype.h kutubhonna qoshiladi
// int isdigit(int c) agar c raqam bolsa true aks holda false qaytaradi
// int isalpha(int c) agar c harp bolsa true aks holda false qaytaradi
// int isalnum(int c) agar c raqam yoki harp bolsa true aks holda false qaytaradi
// int islower(int c) agar c kichik harp bolsa true aks holda false qaytaradi
// int isupper(int c) agar c katta harp bolsa true aks holda false qaytaradi
// int istolower(int c) agar c katta harp bolsa kichik harp qaytaradi aks holda tolower argumenti ozgarish qaytaradi
// strtok(s," ,.-"); strtok funksiyasi satrni ajraataadi agar shu beligilaf kelsa satr ajraydi n taga
// s="salom"; <- yoki -> cin.getline(s,sizeof(s));
// cout<<sizeof(s) - > 20;
// couut<<strlen(s)- > 5;
// bularga string.h kutubhon qoshialdi
// strlen satr uzunligini aniqlash strlen(s)- > 5;
// strcpy, ctrncpy - satrdan nusha olish strcpy(s1, "oddiy satr");
// strcat, strncat - satrlarni qoshish (ulash) strncat(s1, "dasturchilar ", 9);
// strcmp, strncmp - satrlarni solishtirish  (strcmp(parol, s)!=0)
// strstr - qidirish uchun ishlatiladi (strstr(str[i], s) !=NULL)
// strtok - satrni qismlarga ajrarish strtok(NULL," ,.-");
// char satr[15];
// cin.getline(satr,  15); cin.getline(satr, sizeof(satr));
// satr ohiiri '\0' belgisi bilan tugaaedi
// c=getche(); belgi kiritish  buning uchun bunda belgi chiqadi nclude <conio.h>
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
