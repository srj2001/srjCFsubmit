//INCORRECT

#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        long long a[n],k[n-1],count =0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        long long max = 1e10;
        /*
        for (int i = 0; i < n-1; i++)
        {
            k[i] = abs(a[i] - a[i+1]);
        }*/
        for (int i = 0; i < n-1; i++)
        {
            max = min(max, abs(a[i] - a[i + 1]));
            if(a[i+1]<=max){
                count++;
            }
            else{
                break;
            }
             
        }
        cout << count+1 << endl;; //-3 -2 -1 1 1 1
        

        
        
    }
}