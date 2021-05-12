#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a,a+n);     // sort func in c++ sort(arr , arr +n) means first element is arr and to which length u wanna sort!
        int c=0;
        for(int i=0;i<n-1;i++){
            if(abs(a[i]-a[i+1])>1) // absoulute value therefore used abs
            c++;
        }
        if(c>=1) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
