#include<bits\stdc++.h>
using namespace std;

int main(){
    string s1,s2,s3,sC;
    cin >> s1;
    cin >> s2;
    cin >> s3;
    s1.append(s2);
    sort(s1.begin(),s1.end());
	sort(s3.begin(),s3.end());
    if(s1==s3){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    /*int r=0;
    if( s3.length()==sC.length()){
        for (int i = 0; i < sC.length(); i++)
        {
            if(sC.find(s3[i]<0)){
                r==1;
            }
        }
    }
    if(r==1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }*/
    
}