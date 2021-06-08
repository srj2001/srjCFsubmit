#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;


/*int highestPowerof2(int n) {
    int p = (int)log2(n);
    return (int)pow(2,p);
}*/

bool sqaure(int k){
    int y= sqrt(k);
    return y*y ==k;
}

int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n%2==0&& sqaure(n/2)){
            cout << "YES" << endl;
        }
        else if(n%4==0&& sqaure(n/4)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
}