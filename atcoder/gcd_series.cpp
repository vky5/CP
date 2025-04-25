// https://atcoder.jp/contests/abc125/tasks/abc125_c

#include <climits>
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
using ll = long long int;



int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(0);
    ll n; cin>>n;
    vector<ll> ls(n), gcd_from_starting(n+1), gcd_from_ending(n+1) ;
    
    for (ll i = 0; i<n; i++) cin>>ls[i];
    
    for (ll i = 1; i<=n; i++){
        gcd_from_starting[i] = __gcd(gcd_from_starting[i-1], ls[i-1]);
    }
    
    for (ll i = n-1; i>=0; i--){
        gcd_from_ending[i] = __gcd(gcd_from_ending[i+1], ls[i]);
    }
    
    ll ans = gcd_from_starting[n]; // which is also equal to gcd_fromend[0] since these two store then entire gcd of the array 
    
    for (int i = 1; i<=n; i++){
        ans  = max(ans, __gcd(gcd_from_ending[i], gcd_from_starting[i-1]));
    }
    
    cout<<ans<<endl;
    
    
}