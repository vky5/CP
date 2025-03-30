#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long int;


int main() {
  ll t;
  cin >> t;

  while (t--) {
    ll n, k;
    cin >> n >> k;
    
    vector<ll> ls(n);
    for (ll i = 0; i < n; i++)
      cin >> ls[i];

    sort(ls.begin(), ls.end());
    if (n==1){
        cout<<0<<endl;
        continue;
    }

    ll mx_sz = 0;
    bool cnt = true;
    ll lcl = 1;

    for (ll i = 0; i + 1 < n; i++) {
      if (ls[i + 1] - ls[i] <= k) {
          // cout<<ls[i+1]<<" "<<ls[i]<<endl;
        cnt = true;
        lcl++;
      } else if (cnt) {
          
        mx_sz = max(lcl, mx_sz);
        lcl = 1;
        cnt = false;
      }
    }

    if (cnt) {
      mx_sz = max(lcl, mx_sz);
    }

    cout << n - mx_sz << endl;
  }

  return 0;
}
