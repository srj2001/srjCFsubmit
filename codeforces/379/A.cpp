#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int main(){
    int a,b,current_candles,New_candles;
    cin >> a >> b;
    current_candles =a;
    while(current_candles>=b){
        New_candles = current_candles/b;
        current_candles = current_candles%b + New_candles;
        a += New_candles;
    }
    cout << a;
    return 0;
}
    

