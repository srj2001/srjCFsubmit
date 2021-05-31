#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
    long long t,n;
    cin >> t;
    bool check;
    while(t--){
        check = false; 
        cin >> n;
        if (n % 11 == 0 || n % 111 == 0 ) {
            check = true;
        }
        else {
            while (n > 0) {
                if (n % 11 == 0 || n % 111 == 0) {
                    
                    check =true;
                    break;
                }
                n = n - 111;
            }
        }
        if(check){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }


    
    
   
}