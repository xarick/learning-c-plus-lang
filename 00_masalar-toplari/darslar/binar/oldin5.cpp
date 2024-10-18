#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(){
FILE *f; f=fopen("1.dat","wb");
int n; cin>>n;
fwrite (&n, sizeof(int),1,f);
f=fopen("2.dat","rb");
fread (&n, sizeof(int),1,f);
          system("PAUSE");
    return EXIT_SUCCESS;
}
