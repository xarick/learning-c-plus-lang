#include <iostream>
#include <math.h>
using namespace std;
int main(){
float a1,b1,c1,a2,b2,c2,x,y,d;
cin>>a1>>b1>>c1>>a2>>b2>>c2;

d=(a1*b2-a2*b1);
x=(c1*b2-c2*b1)/d;
y=(a1*c2-a2*c1);

cout<<x<<" "<<y;

return 0;	
}
