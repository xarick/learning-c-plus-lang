#include <iostream>
#include <math.h>
using namespace std;
int main(){
int a,b,c,d;
cin>>a>>b>>c;
d=a; // a=1 b=2 c=3
a=b;
b=c;
c=d;
cout<<a<<" "<<b<<" "<<c;

return 0;	
}
