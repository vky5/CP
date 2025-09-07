/*
 * today is 07/09/2025 and from today we are going to restart the serious
 * journey of my codeforces back
 */

#include <iostream>
#include <vector>

using namespace std;
using ll = long long int;

int main() {
  ll n, k;
  cin >> n >> k;

  vector<ll> ls(n+1);
  ll prev = 0;
  for (ll i = 0; i < n; i++) {
    ll tmp;
    cin >> tmp;
    prev+=tmp;
    ls[i+1] = prev;
  }

  ll i = 0, j = 0;
  ll count = 0;

  // for (ll x: ls){ cout<<x<<" ";} cout<<endl;

  while (j < n+1 && i < n+1) {
    if ((ls[j] - ls[i]) < k) {
      j++;
    } else if ((ls[j] - ls[i]) > k) {
      i++;
    } else {
        // cout<<i<<" "<<j<<endl;
      count++;
      i++;
      j++;
    }
  }

  cout << count << endl;
}
