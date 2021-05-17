#include<iostream>
using namespace std;
int a[200020];
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int d=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(i>0&&a[i]<a[i-1]) d=1;
		}
		if(d==0)
			cout<<0<<endl;
		else if(a[0]==1||a[n-1]==n)
			cout<<"1"<<endl;
		else if(a[0]==n&&a[n-1]==1)
			cout<<"3"<<endl;
		else
			cout<<"2"<<endl;
 	}
 	return 0;
}