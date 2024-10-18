#include <iostream>
#include <math.h>
#include <fstream>
#include <string>
#include <conio.h>
using namespace std;
int main(){
    ifstream oqish("1.txt");
    if(!oqish.is_open()){
    cout<<"fayl topilmadi "<<endl;
    exit(1);}
    int n,a[100]; 
    cout<<"n= "; cin>>n;
    for (int i=0; i<=n; i++)
    {cin>>a[i];
    oqish>>a[i];
    }
    ofstream yoz("2.txt");
    int c=0;
    for (int i=0; i<=n; i++)
    {c=a[i]*a[i]; 
    yoz<<c<<endl;
    }
    ofstream soz("1.txt");
    int d=0;
    for (int i=0; i<=n; i++)
    {d=a[i]; 
    soz<<d<<endl;
    }
    
    oqish.close(); yoz.close();  
getch(); //getchar();
// system("PAUSE");
return 0;
}
    
