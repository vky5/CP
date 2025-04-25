#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long int;

int main() {
  ll n, k;
  cin >> n >> k;
  vector<pair<ll, ll>> ls(n);

  for (ll i = 0; i < n; i++) {
    cin >> ls[i].first;
    ls[i].second = i + 1;
  }

  sort(ls.begin(), ls.end());

  for (ll i = 0; i < n; i++) {
    ll newTarget = k - ls[i].first;
    ll left = i + 1, right = n - 1;
    while (left < right) {
      if ((ls[right].first + ls[left].first) == newTarget) {
        cout << ls[i].second << " " << ls[left].second << " "
             << ls[right].second << endl;
        return 0;
      } else if ((ls[left].first + ls[right].first) > newTarget) {
        right--;
      } else {
        left++;
      }
    }
  }
  cout << "IMPOSSIBLE" << endl;
}
