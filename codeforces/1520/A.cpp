#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int i,j,k,n;
        string s;
        cin >> n >> s;
        int result =1;
        for(i=0;i<n-1;i++){
            for(j=i+2;j<n;j++){          // 0 pos and 2 pos compare hui agar same hui 
                                            //to check kar re k loop me jaake ki 0 pos and 1 pos same he kya ..agar same nahi he to 
                                            //  matlab example ABA ho skta jo valid nahi hoga ....to result = 0;
                if(s[i]==s[j]){                         
                    for(k=i+1;k<j;k++){
                        if(s[k]!=s[i]){
                            result =0;
                            break;
                        }
                    }
                }
            }
        }
        if(result==0){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
}