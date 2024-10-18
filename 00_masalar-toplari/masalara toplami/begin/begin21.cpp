#include <iostream>
#include <math.h>
using namespace std;
int main(){
float x1,x2,x3,y1,y2,y3;
float a,b,c,s,p;
cin>>x1>>x2>>x3>>y1>>y2>>y3;
a=fabs(x1-y1);
b=fabs(x2-y2);
c=fabs(x3-y3);
p=(a+b+c)/2;

s=sqrt(p*(p-a)*(p-b)*(p-c));
cout<<p<<"  "<<s;
return 0;	
}
