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
    int a[100]; 
    for (int i=0; i<=10; i++)
    {
    oqish>>a[i];
    }
    ofstream yoz("2.txt");
    
    int c=0;
    for (int i=0; i<=10; i++)
    {
    c=c+a[i];
    }
    yoz<<c<<endl;
    oqish.close(); yoz.close();
       
getch(); //getchar();
// system("PAUSE");
return 0;
}
