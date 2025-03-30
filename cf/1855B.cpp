#include <iostream>

using namespace std;
using ll = long long int;
int main(){
    ll t; cin>>t; 
    while (t--) {
        ll n; cin>>n;
        ll count = 1;
        for (ll i = 2; i<=n; i++){
            if (n%i==0){
                count++;
            }else{
                break;
            }
        }
        
        cout<<count<<endl;
    }
    
    return 0;
}