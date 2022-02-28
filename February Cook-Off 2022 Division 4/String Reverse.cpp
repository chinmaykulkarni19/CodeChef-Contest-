#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    string r=s;
	    
	    
	    reverse(r.begin(),r.end());
	    int i=0,j=0,ans=0;
	    while(i<s.length())
	    {
	        if(s[i]==r[j])
	        j++;
	        else
	        ans++;
	        i++;
	    }
	    cout<<ans<<endl;
	}
	
	return 0;
}