#include <iostream>
#include <math.h>
using namespace std;

int main(){
float z,x,y;
int k=0;
besh:
	k++;
cout<<"x= "; cin>>x;
cout<<"y= "; cin>>y;
z=(fabs(x)-fabs(y))/(1+fabs(x*y));
cout<<"z="<<z<<endl;
if(k==3)return 0;
goto besh;

return 0;
}
