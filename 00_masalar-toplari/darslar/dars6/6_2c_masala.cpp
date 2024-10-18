#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c;
	int max=0,min=0;
	cin>>a>>b>>c;
if(a>b && a>c)
{
	max=a;
}

if(b>a && b>c)
{
	max=b;
}

if(max<c)
{
	max=c;
}


	cout<<"max= "<<max<<endl;
//	cout<<"min= "<<min<<endl;
return 0;
}

