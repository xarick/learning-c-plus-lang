#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
using namespace std;
int main(){ 
int i;
FILE *f; char k;
char s[100]; gets(s);

f=fopen("1.dat","wb");
fwrite (s, sizeof(s),1,f);
fclose(f);

k=ftell(f); cout<<k<<endl;
//fseek(f,0,SEEK_SET); k=ftell(f);
rewind(f);
cout<<k<<endl; 
          system("PAUSE");
    return EXIT_SUCCESS;
}
