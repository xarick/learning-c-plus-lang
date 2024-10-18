#include <iostream>
#include <math.h>
using namespace std;
int main(){
float a,b,c,d,x;
float dis,x1,x2;
cin>>a>>b>>c;

dis=b*b-4*a*c;
x1=(-b+sqrt(dis)/2*a);
x2=(-b-sqrt(dis)/2*a);

cout<<x1<<" "<<x2;

return 0;	
}
