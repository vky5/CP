#include <algorithm>
#include <bits/stdc++.h>
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

    ll ls[n][k];
    for (ll i = 0; i < n; i++) {
      for (ll j = 0; j < k; j++) {
        cin >> ls[i][j];
      }
    }
    
    vector<ll> tmp(n); // for temporary storage
    
    ll ans = 0;
    for (ll i = 0; i < k; i++) {
      for (ll j = 0; j < n; j++) { // get one column first
        tmp[j] = ls[j][i];
      }

      sort(tmp.rbegin(), tmp.rend());
    
      ll countLocal = 0; // counting difference in a column
      ll somethingsomething = n - 1;
      ll factor = 0;
      for (int x : tmp) {
        countLocal += (somethingsomething - factor) * x;
        factor++;
        somethingsomething--;
      }

      ans += countLocal;
    }
    cout << ans << endl;
  }
}
