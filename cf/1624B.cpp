#include <iostream>

using namespace std;
using ll = long long int;


int main(){
    ll t; cin>>t;
    while(t--){
        ll a, b, c; cin>>a>>b>>c;

        if (2*b == (a+c)){
            cout<<"YES"<<endl;
        }else if (2*b<(a+c) && ((a+c)%(2*b))==0){
            cout<<"YES"<<endl;
        }else if (2*b>(a+c)){
            if ((2*b - a)%c==0){
                cout<<"YES"<<endl;
            }else if ((2*b - c)%a==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
}