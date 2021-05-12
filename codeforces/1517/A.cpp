#include<iostream>
#include<stdio.h>
#define ll long long
using namespace std;

ll solve(){
    ll n;
    cin>>n;
    ll sum = 0;
    if(n%2050!=0)
        return -1;
    else
        {
            ll k = n/2050;
            while(k>0){
                ll x = k%10;
                sum+= x;
                k = k/10;
            }
            return sum;
        }
}
int main()
{
    int no;
      ll a;
    cin>>no;
    for(int i=0;i<no;i++){

        cout<<solve()<<endl;
    }
}
