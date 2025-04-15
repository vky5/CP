#include <iostream>

using namespace std;
using ll = long long int;



int main(){
    ll t; cin>>t;
    while(t--){
        ll x, d; cin>>x>>d;

        if (d%4==0){
            d = 0;
        }else if (d%4==1){
            d = -d;
        }else if (d%4==2){
            d = 1;
        }else{
            d = d+1;
        }

        if (x%2!=0){
            cout<<x-d<<endl;
        }else{
            cout<<x+d<<endl;
        }
    }
}