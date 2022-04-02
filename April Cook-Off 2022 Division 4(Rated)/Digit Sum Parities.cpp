#include <iostream>
using namespace std;

int func(int n)
{
    int r=0,s=0;
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        s=s+r;
    }
    return s;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{   int n;
	    cin>>n;
	    int a=func(n);
	    int b=func(n+1);
	    if((a%2==0 && b%2!=0)||(a%2!=0 && b%2==0))
	    {
	        cout<<n+1<<endl;
	    }
	    else
	    cout<<n+2<<endl;
	}
	return 0;
}