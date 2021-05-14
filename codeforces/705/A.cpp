#include<iostream>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    
        if(n==1){
            cout << "I hate it\t" << endl;
            
        }
        if(n==2){
            cout << "I hate that I love it\t" << endl;
            
        }
        if(n==3){
            cout << "I hate that I love that I hate it\t" << endl;
            
        }
        if(n==4){
            cout << "I hate that I love that I hate that I love it\t" << endl;
        }
        if(n!=1 && n!=3 && n%2!=0){
            for(int j =0;j<n/2;j++){
                cout << "I hate that\t";
                cout << "I love that\t";
            }
            cout << "I hate it" << endl;
        }
        if(n!=2 && n!=4 && n%2==0){
            for(int j =0;j<(n/2-1);j++){
                cout << "I hate that\t";
                cout << "I love that\t";
            }
            cout << "I hate that\t";
            cout << "I love it" << endl;
        }
    
    return 0;
    
}