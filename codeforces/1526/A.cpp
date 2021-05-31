#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >>t;
    while (t--)
    {
        cin >> n;
        int a[2*n];
        for (int i = 0; i < 2*n; i++)
        {
            cin>> a[i];
        }
        sort(a,a+2*n);
        for(int i = 0, j = 2 * n - 1; i < j; i ++, j --)
        {
            cout << a[i] << " " << a[j] << " ";
        }
        cout << endl;
    }
        return 0;
    
}

