#include <iostream>
#include <vector>

using namespace std;
using ll = long long int;


int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        
        vector<ll> ans;
        for (ll i = 0; i<n; i++){
            ll x; cin>>x;
            if (i && ans.back()>x){
                ans.push_back(1);
            }
            
            ans.push_back(x);
        }
    cout<<ans.size()<<endl;
    for (auto x: ans) cout<<x<<" "; cout<<endl;
    }
    
}
