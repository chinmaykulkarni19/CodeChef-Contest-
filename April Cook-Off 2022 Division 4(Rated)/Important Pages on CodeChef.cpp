#include <iostream>
using namespace std;

int main() {
	int a,b;
	cin>>a>>b;
	if(a==0 && b==1 || a==0 && b==0)
	{
	    cout<<"https://www.codechef.com/practice"<<endl;
	}
	if(a==1 && b==0)
	{
	    cout<<"https://www.codechef.com/contests"<<endl;
	}
	if(a==1 && b==1)
	{
	    cout<<"https://discuss.codechef.com"<<endl;
	}
	return 0;
}