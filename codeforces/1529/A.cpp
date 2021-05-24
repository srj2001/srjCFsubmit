#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n],min,count=0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);

        min = a[0];
        for (int i = 0; i < n; i++)
        {
            if(min > a[i]){
                min = a[i];
            }
        }
        /*int k;
        for (int i = 0; i < n; i++)
        {
            if(a[i]!=a[0]){
                k =0;
            }
            else{
                k=1;
            }
        }*/

        for (int i = 0; i < n; i++)
        {
            if(a[i]==min){
                count = count +1;
            }
        }
        cout << n-count << endl;
        /*if(k==1){
            cout << "0" << endl;
        }
        else{
            cout << n-count << endl;
        }*/

        
    }
    return 0;
}