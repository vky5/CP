#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> ls(n + 1);
    map<ll, ll> record;

    record[0] = 1;

    for (ll i = 0; i < n; i++) {
        ll tmp;
        cin >> tmp;
        ls[i + 1] = ls[i] + tmp;
        ll mod = ((ls[i + 1] % n) + n) % n;
        record[mod]++;
    }

    ll count = 0;

    for (ll i = 0; i <= n; i++) {
        ll mod = ((ls[i] % n) + n) % n;
        record[mod]--;
        count += record[mod];
    }

    cout << count << endl;
}
