#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int x,y,z;
	int max=0,min=0;
	cin>>x>>y>>z;
max=((x+y+z)>x*y*z)?(x+y+z):x*y*z;

	cout<<"max= "<<max<<endl;
//	cout<<"min= "<<min<<endl;
return 0;
}

