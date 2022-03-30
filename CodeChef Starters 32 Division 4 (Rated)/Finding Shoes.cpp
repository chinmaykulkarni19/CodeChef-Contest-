#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    if(n<m)
	    cout<<n<<endl;
	    if(n>=m)
	    cout<<((n*2)-m)<<endl;
	    
	}
	return 0;
}