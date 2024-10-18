#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;
int main(){
    int s=0;
FILE *f; 

f=fopen("1.dat","wb");
int n; cin>>n;
for(int i=1; i<n; i++){fwrite(&i,sizeof(int),1,f);}

fclose(f); f=fopen("1.dat","rb");
for(int i=1;i<n; i++){fread(&i,sizeof(int),1,f);s+=i;}
cout<<endl<<s<<endl; 
fclose(f);

system("PAUSE");
return EXIT_SUCCESS;
}
