#include <iostream>
#include <vector>

using namespace std;
using ll = long long int;

int main(){
    freopen("div7.in", "r", stdin);
	freopen("div7.out", "w", stdout);
    ll n; cin>>n;
    
    vector<ll> ls(n+1);
    ls[0] = 0;
    for (int i = 0; i<n; i++){
        int tmp; cin>>tmp;
        ls[i+1] = ls[i] + tmp;
    }
    
    ll ans = 0;
    
    for (ll i = 0; i<=n; i++){
        for (ll j = i+1; j<=n; j++){
            if ((ls[j] - ls[i])%7==0){
                ans = max(ans, j - i);
            }
        }
    }
    
    cout<<ans<<endl;
}