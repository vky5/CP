#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long int;
int main(){
    freopen("pairup.in", "r", stdin);
    freopen("pairup.out", "w", stdout);
    ll n; cin>>n; 
    vector<pair<ll, ll>> ls(n);
    ll total = 0;
    for (ll i = 0; i<n; i++){
        cin>>ls[i].second>>ls[i].first; // first one is value of milk second is quantity
    }
    
    sort(ls.begin(), ls.end());
    
    
    ll left = 0, right = n-1;
    ll ans = 0;
    
    while(left<=right){
        ans = max(ans, ls[left].first+ ls[right].first);
        ls[left].second--;
        ls[right].second--;
        
        if (ls[left].second==0){
            left++;
        }
        if (ls[right].second==0){
            right--;
        }
    }
    
    cout<<ans<<endl;
}