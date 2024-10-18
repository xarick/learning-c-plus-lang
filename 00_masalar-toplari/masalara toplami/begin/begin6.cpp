#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int a,b,c,s,v;
	cin>>a>>b>>c;
	v=a*b*c;
	s=2*(a*b+b*c+a*c);
	cout<<s<<"  "<<v;

return 0;	
}
