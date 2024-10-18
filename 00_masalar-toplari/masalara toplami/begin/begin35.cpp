#include <iostream>
#include <math.h>
using namespace std;
int main(){
float v1,v2,t1,t2,s;
cin>>v1>>t1>>v2>>t2;

s=t1*(v1+v2)+t2*(v1-v2);
cout<<s;
return 0;	
}
