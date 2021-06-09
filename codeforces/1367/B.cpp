#include<bits\stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin >> t;
    while(t--){
        cin >> n;
        int a[n],Even_count=0,Odd_count=0;
        for(int i=0;i<n;i++){
            cin >> a[i];
            if(a[i]%2!=i%2){
                if(i%2==0){
                    Even_count++;
                }
                else{
                    Odd_count++;
                }
            }
        }


        if(Even_count!=Odd_count){
            cout << "-1" << endl;
        }
        else{
            cout << Even_count << endl;
        }
       /* if(Fcount == 0){
            cout << "0" << endl;
        }
        if(Fcount<n/2){
            cout << Fcount/2 << endl;
        }
        else{
            cout << "-1" << endl;
        }*/
    }
}