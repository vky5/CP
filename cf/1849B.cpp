#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long int;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<pair<ll, pair<ll, ll>>> ls(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> ls[i].second.first;
            ls[i].second.second = i;
            ls[i].first = ls[i].second.first % k;
            if (ls[i].first == 0)
                ls[i].first = k;
        }

        vector<ll> soln;
        ll i = 0;


        // in my previous solution I was not considering that we need to kill the monster with highest health first... that was the main logic issue
        
        // Sort by remainder descending, index ascending
        sort(ls.begin(), ls.end(), [](pair<ll, pair<ll, ll>> a, pair<ll, pair<ll, ll>> b){
            if (a.first != b.first) \
                return a.first > b.first; // sort on the basis of largest number because we need to kill the largest monster first and then go for week ones
            return a.second.second < b.second.second; 
        });

        for (i; i < n; i++)
        {
            soln.push_back(ls[i].second.second + 1);
        }

        for (auto x : soln)
            cout << x << " ";

        cout << endl;
    }
}