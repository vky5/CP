#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ll = long long int;

int main(){
    ll t; 
    cin >> t;
    while(t--){
        ll n; 
        cin >> n;

        vector<ll> a(n), b(n);
        map<ll, ll> a_max_len, b_max_len;

        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            a_max_len[a[i]] = 0;
            b_max_len[a[i]] = 0;
        }
        for (ll i = 0; i < n; i++) {
            cin >> b[i];
            a_max_len[b[i]] = 0;
            b_max_len[b[i]] = 0;
        }

        // Handle array a
        ll lcl = 1;
        ll compare = a[0];
        for (ll i = 1; i < n; i++) {
            if (a[i] == compare) {
                lcl++;
            } else {
                a_max_len[compare] = max(lcl, a_max_len[compare]);
                compare = a[i];
                lcl = 1;
            }
        }
        a_max_len[compare] = max(a_max_len[compare], lcl); 

        
        lcl = 1;
        compare = b[0];
        for (ll i = 1; i < n; i++) {
            if (b[i] == compare) {
                lcl++;
            } else {
                b_max_len[compare] = max(lcl, b_max_len[compare]);
                compare = b[i];
                lcl = 1;
            }
        }
        b_max_len[compare] = max(b_max_len[compare], lcl); 

    
        ll ans = 0;
        for (auto x : a_max_len) {
            ans = max(ans, x.second + b_max_len[x.first]);
        }

        cout << ans << endl;
    }
    return 0;
}
