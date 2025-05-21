#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
using ll = long long int;
 
ll dist(ll a, ll b){
    return abs(a - b);
}
 
int main(){
    ll m, n; cin>>n>>m;
    
    vector<ll> city(n), tower(m);
    for (ll i= 0; i< n; i++) cin>>city[i];
    for (ll i= 0; i< m; i++) cin>>tower[i];
    ll ans = 0;
    
    for (ll i = 0, j = 0; i<n; i++){ // this is for the cities
        while(dist(city[i], tower[j])>=dist(city[i], tower[j+1]) && j+1<m){ 
            // this loops checks if the distance between the current tower and next tower is less or not. if it is less, move to next tower
            // this is done to reduce the distane between tower and the city.
            // when we are going to calculate the answer, we already have a j value and use it to calcualte the distance
            j++;
        }
        
        ans = max(ans, dist(city[i], tower[j]));
    }
    
    cout<<ans<<endl;
    return 0;
}