#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long int;

int main(){
    ll t; cin>>t;

    while(t--){
        ll a, b, n;
        cin>>a>>b>>n;
        vector<ll> ls(n);

        for (ll i = 0; i<n; i++) cin>>ls[i];

        // sort(ls.rbegin(), ls.rend());
        ll ans = b;
        for (ll i = 0; i<n; i++){
            b+=(min(a, ls[i] + 1)-1);
        }

        cout<<b<<endl;
    }
}
