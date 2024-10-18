#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;
int main(){ 

FILE *f; char s[100]; gets(s);
f=fopen("1.dat","wb");
fwrite (s, sizeof(s),1,f);fclose(f);
f=fopen("1.dat","rb");
char d[100];
fread (d, sizeof(d),1,f);
puts(d);fclose(f);
          system("PAUSE");
    return EXIT_SUCCESS;
}
