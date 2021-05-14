#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    float sum ;
    float ans;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum+ a[i];
    }
    ans = sum/n;
    cout << ans;
    
    return 0;
}