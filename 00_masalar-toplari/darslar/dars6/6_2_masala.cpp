#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c;
	int max,min;
	cin>>a>>b>>c;
max= (a<b)? b:a;
max= (max<c)? c:max; 


	cout<<"max= "<<max<<endl;
//	cout<<"min= "<<min<<endl;
return 0;
}

