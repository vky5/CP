#include <cmath>
#include <iostream>
#include <vector>

using namespace std;
using ll = long long int;

// sbse phele hm prime numbers dhekenge
vector<ll> primenum(ll n) {

  vector<ll> tmp;

  if (n == 1) {
    return tmp;
  }
  tmp.push_back(2);

  for (ll i = 3; i <= n; i += 2) {
    bool isPrime = true;
    for (ll j = 2; j < i; j++) {
      cout << i << " " << j << endl;
      if (i % j == 0 && i != j) {
        isPrime = false;
        break;
      }
    }

    if (isPrime)
      tmp.push_back(i);
  }

  return tmp;
}

int main() {
  ll t;
  cin >> t;

  while (t--) {
    ll n;
    cin >> n;

    if (n == 1) {
      cout << 1 << endl;
      continue;
    }
    // ll tmp = sqrt(n);
    vector<ll> primes = primenum(n);

    for (auto x : primes) {
      cout << x << " ";
    }
    cout << endl;

    ll count = 0;
    for (ll x : primes) {
      if (n % x == 0) {
        ll count_for_loop = 1;
        // prime elements ke last tk jana chaiye vo last vala element bhi inclue
        // ho skta hai
        for (ll i = x + 1; i <= primes[primes.size() - 1]; i++) {
          if (n % i == 0) {
            count_for_loop++;
          } else {
            break;
          }
        }

        // counting reverse
        for (ll i = x - 1; i >= 1; i--) {
          if (n % i == 0) {
            count_for_loop++;
          } else {
            break;
          }
        }

        count = max(count, count_for_loop);
      }
    }

    cout << count << endl;
  }
  return 0;
}
