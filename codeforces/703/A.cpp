#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m ,c;
    int Mcount=0, Ccount =0;
    while(n--){
        cin >> m >> c;
        if(m>c){
            Mcount= Mcount+1;
        }
        else if(m==c){
            continue;
        }
        else{
            Ccount = Ccount +1;
        }
    }
    if(Mcount>Ccount){
        cout << "Mishka" << endl;
    }
    else if(Mcount==Ccount){
        cout << "Friendship is magic!^^" << endl;
    }
    else{
        cout << "Chris" << endl;
    }
    return 0;
}