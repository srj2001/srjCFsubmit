#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t,n;
    cin >> t;
    while(t--){
        int e=0,o=0;
        cin >> n;
        int a[2*n];
        for(int i=0;i<2*n;i++){
            cin >> a[i];
            if(a[i]%2==0){
                e++;
            }
            else{
                o++;
            }

        }
        
        /*int r=1;
        for(int i=0;i<2*n;i+2){
            if((a[i]+a[i+1])%2==0){
                r+=1;
            }
            else{
                r-=1;
            }
        }*/
        if(e==o){
           cout << "Yes" << endl;
        }
       else{
           cout << "No" << endl;
        }
    }
    return 0;
    
}

