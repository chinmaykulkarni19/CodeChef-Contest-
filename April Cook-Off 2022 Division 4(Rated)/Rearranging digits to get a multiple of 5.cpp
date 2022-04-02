#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]=='0' || s[i]=='5')
	        count++;
	    }
	    if(count>0)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}