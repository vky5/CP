#include <iostream>
#include <cmath>

using namespace std;
using ll = long long int;

int main(){
    ll t; cin>>t;
    while (t--) {
        ll n; cin>>n;
        
        if (n==1){
            cout<<1<<endl;
            continue;
        }
        
        ll tp = sqrt(n);
        
        ll count = 0;
        bool cnt = false;
        ll local = 0;
        for (ll i = 1; i<=tp; i++){
            if (n%i==0){
                cnt = true;
                local++;
            }else if (cnt){
                count = max(count, local);
                cnt = false;
                local = 0;
            }
        }
        
        cout<<count<<endl;
    }
    
    return 0;
    
}