/*
https://judge.yosupo.jp/problem/static_range_sum
Static Range Sum
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> ls(n + 1);
    ls[0] = 0;

    for (ll i = 1; i < n + 1; i++)
    {
        ll tmp;
        cin >> tmp;

        ls[i] = ls[i - 1] + tmp;
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;
        cout << ls[r] - ls[l] << endl;
    }

    return 0;
}

// You idiot why didnt you check for the memory constraint in the code it is so
// what you did