#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
ll dist(ll a, ll b){
    return abs(a - b);
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll m, n; cin>>n>>m;
    vector<ll> city(n), tower(m);
    for (ll i= 0; i< n; i++) cin>>city[i];
    for (ll i= 0; i< m; i++) cin>>tower[i];
    ll ans = 0;
    for (ll i = 0, j = 0; i < n; i++){
        while(dist(city[i], tower[j])>=dist(city[i], tower[j+1]) && j+1<m){
            j++;
        }
        ans = max(ans, dist(cit
 
    }
    cout<<ans<<endl;
    return 0;
}