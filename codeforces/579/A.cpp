#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

/*int highestPowerof2(long long n) {
    long long p = (long long)log2(n);
    return (long long)pow(2,p);
}*/

int main(){
    long long n,c=0;
    cin >> n;
    while(n>0){
        n= n&(n-1);
        c++;
    }
    cout << c;
    /*if(n==highestPowerof2(n)){
                cout << "1";          
    }
    else{
        cout << round(log2(n));
    }*/
    return 0;
}