#include<iostream>
using namespace std;
int main(){
    int i,x,h,n,count;
    cin>> n >> h;
    count = n;
    for(i=0;i<n;i++){
        cin >> x;
        count += (x>h); 
    }
    cout << count;
    return 0;
}