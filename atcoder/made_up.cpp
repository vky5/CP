// https://atcoder.jp/contests/abc202/tasks/abc202_c?lang=en
// 
// 

#include <bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long int;

int main(){
    ll n; cin>>n;
    
    vector<ll> a(n), b(n), c(n);
    
    for (ll i = 0; i<n; i++) cin>>a[i];
    for (ll i = 0; i<n; i++) cin>>b[i];
    for (ll i = 0; i<n; i++) cin>>c[i];
    
    ll ans  = 0;
    map<ll, ll> ac;
    for (ll i = 0; i<n; i++){
        ac[a[i]]++;
    }
    
    for (int i = 0; i<n; i++){
        ans+=ac[b[c[i]-1]];
    }
    
    
    cout<<ans<<endl;
}