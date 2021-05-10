#include<iostream>
using namespace std;
int main(){
    int n = 4;
    long long int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int j=0;j<n;j++){
        for(int k=0;k<n;k++)
        {
            if(j==k)break;
            else if(a[j]==a[k])
            {
               count = count +1;
               break;
            }
 
        }
    }
    cout << count;
    return 0;
}