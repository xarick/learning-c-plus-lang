#include <iostream>
#include <math.h>
using namespace std;
int main(){
float a,b,c,s,p;
cin>>a>>b>>c;
s=fabs(b-a)*fabs(c-a);
p=2*(fabs(b-a)+fabs(c-a));
cout<<p<<"  "<<s<<endl;	
return 0;	
}
