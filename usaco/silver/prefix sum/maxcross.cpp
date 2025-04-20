#include <climits>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long int;

int main(){
    freopen("maxcross.in", "r", stdin);
    freopen("maxcross.out", "w", stdout);
    ll n, k, b; cin>>n>>k>>b;

    vector<ll> ls(n+1);

    for (ll i = 0; i<b; i++){
        ll tmp;
        cin>>tmp;
        ls[tmp]++;
        
        // cout<<i<<endl;
    }

    for (ll i = 0; i<n; i++){
        ls[i+1] += ls[i];
    }
    
    ll ans = INT_MAX;
    for (ll i = 0; i+k<=n; i++){
        ans = min(ans, ls[i+k] - ls[i]);
    }
    
    cout<<ans<<endl;
    
}
