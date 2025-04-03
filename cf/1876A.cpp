#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
using ll = long long int;

int main()
{
  ll t;
  cin >> t;

  while (t--)
  {
    ll n, p;
    cin >> n >> p;
    vector<ll> max_res(n);
    vector<pair<ll, ll>> costs;

    for (ll i = 0; i < n; i++)
      cin >> max_res[i];

    for (ll i = 0; i < n; i++)
    {
      ll tmp;
      cin >> tmp;
      costs.push_back(make_pair(tmp, max_res[i]));
    }
    sort(costs.begin(), costs.end(), [](pair<int, int> a, pair<int, int> b)
         {
      if (a.first!=b.first){
        return a.first<b.first;
      }

      return a.second>b.second; });

    // idiot the villager once they get to know can inform to others
    ll total = p; // because we need to inform the first villager

    ll known_guy = 1;

    for (ll i = 0; i < n; i++)
    {

      if (costs[i].first >= p)
      { // if we have arrived where it is benificial for chief to tell the story then do this
        break;
      }

      if (known_guy + costs[i].second > n) // once we informed everyone break
      {
        total += (n - known_guy) * costs[i].first; // here we are including everyone from n to costs[i] but not costs[i] becaues we have always assumed that it is either informed by village chief or other villagers
        known_guy = n;
        break;
      }
      else
      {
        total += costs[i].second * costs[i].first;
        known_guy += costs[i].second;
      }
    }

    total+=(n - known_guy) * p;

    cout << total << endl;
  }
}