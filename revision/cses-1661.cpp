#include <iostream>
#include <map>
#include <vector>
using namespace std;

using ll = long long int;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<ll> ls(n + 1);
  map<ll, ll> record;

  record[0] = 1; // if the exact value of target then ls[0 + x] = exact value (becaues x= exact value) means take it as it
                 // is or from the beginning of the array

  for (ll i = 1; i <= n; i++) {
      ll t;
    cin >> t;
    ls[i] = ls[i - 1] + t;
    record[ls[i]]++;
  }
  ll count = 0;
  for (ll i = 0; i <= n; i++) {
    // cout << ls[i] << endl;
    record[ls[i]]--;
    count += record[ls[i] + k];
  }

  cout << count << endl;
}
