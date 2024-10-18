#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float x,y,z;
	float max=0,min=0;
	cin>>x>>y>>z;
min=((x+y+z/2)<(x*y*z))?(x+y+z/2):x*y*z;

//	cout<<"max= "<<max<<endl;
	cout<<"min= "<<(min*min+1)<<endl;
return 0;
}

