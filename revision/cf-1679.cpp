#include <iostream>

using namespace std;
using ll = long long int;

int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;

    if (n < 4 || n % 2 != 0) { // If n is odd or less than 4, it's impossible
      cout << -1 << endl;
      continue;
    }
    ll rem1 = n % 4;
    ll rem2 = n % 6;

    ll a = n / 4;
    ll b = n / 6;

    ll minBus, maxBus;
    // for minimum divide by 6
    if (rem2 == 0) {
      minBus = b;
    } else if (rem2 == 2) {
      minBus = b + 1; // 6 * (x -1 ) + 6 + 2
    } else if (rem2 == 4) {
      minBus =
          b + 1; // 6 * ( x - 2) + 12 + 4 (16 = 4 * 4 ) => x - 2 + 4 => x + 2
    } else {
      minBus = -1;
    }

    if (rem1 == 0) {
      maxBus = a;
    } else if (rem1 == 2) {
      maxBus = a;
    } else {
      maxBus = -1;
    }

    if (minBus == -1 && maxBus == -1) {
      cout << -1 << endl;
    } else if (minBus == -1 || maxBus == -1) {
      if (minBus == -1) {
        cout << maxBus << " " << maxBus << endl;
      } else {
        cout << minBus << " " << minBus << endl;
      }
    } else {
      cout << minBus << " " << maxBus << endl;
    }
  }
}
