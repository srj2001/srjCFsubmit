#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str;
    int i,k;
    getline(cin, str);
    for(i=0;i<str.length();i++){
    if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
        cout << "YES" << endl;
        return 0;
    }
    }
    cout << "NO";
    return 0;

}