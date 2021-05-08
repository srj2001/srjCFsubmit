#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main()
{
	ll t,a,b;
	cin>>t;
	while(t--)
	{
		cin >> a >> b;
		if(b==1)  
		    cout<<"NO"<<endl;
		else 
		{
			cout<<"YES"<<endl;
			cout<<a<<' '<<a*b<<" "<<a*(b+1)<<endl;
		 } 
	}
    	
	return 0;
} 