#include <climits>
#include <cmath>
#include <iostream>

using namespace std;
using ll = long long int;

int main(){
    ll t; cin>>t; 
    while(t--){
        ll n; cin>>n;
        
        ll go = sqrt(n);
        
        ll x =1, y = n-1;
        
        
        
        for (ll i = 2; i<=go; i++){
            if (n%i==0){
                x = n/i;
                y = n - x;
                break;
            }
        }
        
        cout<<x<<" "<<y<<endl;
        
    }
}