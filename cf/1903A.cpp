#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long int;

int main() {
    ll n;
    cin >> n;
    while (n--) {
        ll t, a;
        cin >> t >> a;

        vector<ll> ls(t);
        for (ll i = 0; i < t; i++) cin >> ls[i];

        vector<ll> sorted_ls = ls; 
        sort(sorted_ls.begin(), sorted_ls.end());

        if (a >= 2 || ls == sorted_ls) { 
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}
