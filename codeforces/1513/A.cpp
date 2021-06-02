#include<bits\stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n >>k;
        int i=1;
        if(k>(n-1)/2){
            cout << "-1" << endl;
        }
        else{    
        
            for(i=1;i<=k;i++){
                cout << i << " " << n << " ";
                n--;
            }
            for(;i<=n;i++){
                cout << i << " ";
            }
            cout << endl;
        }
        
    }
    
}