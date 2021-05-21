#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    long long t,n,x;
    cin >> t;
    while (t--)
    {
        long long sum =0,a[1000];
        cin >> n >> x;
        
        for(int i=0;i<n;i++){
            cin >> a[i];
            sum = sum + a[i];
        }
        if(sum == x){
            cout << "NO" << endl;    
        }
        else{
        cout << "YES" << endl;
        for(int i=0;i<n;i++){
            if(x==a[i]){
                swap(a[i],a[i+1]);
            }
            cout << a[i] << ' ';
            x= x-a[i];
        }
        cout << endl;
        }  
        

    }
    return 0;
    
}

