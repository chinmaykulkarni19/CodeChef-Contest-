#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int z=abs(x-y);
	    cout<<z<<endl;
	}
	return 0;
}