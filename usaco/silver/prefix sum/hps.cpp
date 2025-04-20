/*
Date: 17/04/2025
Time: 02:08 PM

key observation: agr hm sabhi ka prefix sum bnaye ki rock kitne baar aaya
paper kitni baar aaya and let it be represented by rock[] pap[] sec[]
then for i and i+1, inme se ek jarur bdlega
*/

#include <iostream>
#include <vector>

using namespace std;
using ll = long long int;

int main() {
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
  ll n;
  cin >> n;

  vector<ll> a(n + 1), b(n + 1), c(n + 1);

  for (ll i = 0; i < n; i++) {
    char tmp;
    cin >> tmp;

    if (tmp == 'P') {
      a[i + 1] = (a[i] + 1);
      b[i + 1] = b[i];
      c[i + 1] = c[i];
    } else if (tmp == 'H') {
      a[i + 1] = (a[i]);
      b[i + 1] = (b[i] + 1);
      c[i + 1] = c[i];
    } else {
      a[i + 1] += a[i];
      b[i + 1] += b[i];
      c[i + 1] += (c[i] + 1);
    }
  }

  ll ans = 0;
  for (ll i = 0; i <= n; i++) { // first sub array
    ll firstSubArr = max(a[i], max(b[i], c[i]));
    ll secSubArray = max(a[n] - a[i], max(b[n] - b[i], c[n] - c[i]));

    ans = max(ans, firstSubArr+secSubArray);
  }

  cout<<ans<<endl;
}
