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
    int a,b; //oqish>>a>>b;
    cin>>a>>b;
    ofstream yoz("2.txt");
    int c=a+b;
    yoz<<c<<endl;
    oqish.close(); yoz.close();
       cout<<c;
getch(); //getchar();
// system("PAUSE");
return 0;
}
