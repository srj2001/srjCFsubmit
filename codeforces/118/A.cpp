#include<iostream>
#include<string>
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    int i;
    getline(cin,str);
    for(i=0;i<=str.length();i++){
        if(str[i]>=65&&str[i]<=90){
            str[i]=str[i]+32;
        }
    }
    for(i=0;i<=str.length();i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='y'){
        str = str.replace(i,1,"");
        i-=1;
        }
        else{
            str = str;
        }
    }
    for(i=0;i<str.length();i++){
        cout << "." << str[i];
    }


    return 0;
    
}