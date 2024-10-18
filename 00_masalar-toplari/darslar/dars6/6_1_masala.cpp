#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c;
	int max,min;
	cin>>a>>b;
	max=(a<b)?b:a;
	min=(a<b)?a:b;
	if (a==b)
	{
		cout<<"bu sonla teng"<<endl;
		return 0;
	}
	cout<<"max= "<<max<<endl;
	cout<<"min= "<<min<<endl;
return 0;
}

