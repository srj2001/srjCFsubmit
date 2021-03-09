#include <iostream>

using namespace std;

int main()
{
    int k,n,w,sum=0;
    cin >> k >> n >> w;
    for(int i=1;i<=w;i++)
    {
        int p=k*i;
        sum+=p;
    }
    if(sum<n){
        cout << 0;
    }
    else{
    int x = sum -n;
    cout << x;
    return 0;
}
}
