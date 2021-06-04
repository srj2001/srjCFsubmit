#include<iostream>
#include<bits\stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a[4];
        for(int i=0;i<4;i++){
            cin >> a[i];
        }
        /*if(max(a[0],a[1])>min(a[2],a[3])||max(a[2],a[3])>min(a[0],a[1])){
            cout << "YES" << endl;
        }*/
         if(max(a[0],a[1])<min(a[2],a[3])||max(a[2],a[3])<min(a[0],a[1])){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}