#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(){
    int s=0; int a[100];
FILE *f; f=fopen("1.dat","wb");
int n; cin>>n;
for(int i=0; i<n; i++)
{cin>>a[i];}
for(int i=0; i<n; i++){fwrite(&a[i],sizeof(int),1,f);}
fclose(f); f=fopen("1.dat","rb");

for(int i=0;i<n; i++){fread(&a[i],sizeof(int),1,f);s+=a[i];}
cout<<endl<<s<<endl; fclose(f);
          system("PAUSE");
    return EXIT_SUCCESS;
}
