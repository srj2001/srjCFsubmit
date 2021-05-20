#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long min_k =0;
        
        long long a[n],k[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a,a+n);
        for(int i=0;i<n-1;i++){
            k[i]= abs(a[i]-a[i+1]);
        }
        min_k = k[0];
        for (int i = 0; i < n-1; i++)
        {
            if (k[i]< min_k)
            {
                min_k = k[i];
            }
        }
        
        cout << min_k << endl;
    }
    return 0;
    
}