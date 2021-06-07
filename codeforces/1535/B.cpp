#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n];
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        //sort(a,a+n);

        int count =0;
        
        /*int k[n];
        for (int i = 0,j=0;j<n, i < n; j++,i++)
        {
            if(a[i]%2!=0){
                k[j]=a[i];
            }
        }*/
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(a[i],2*a[j])>1||__gcd(a[j],2*a[i])>1){
                        count ++;
                }     
            }
        }
        
        cout << count << endl;
    }
}