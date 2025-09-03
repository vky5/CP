#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;
using ll = long long int;

bool funcTest(ll x, ll n, ll a, ll b)
{
    ll horizontal = x / a;
    if (horizontal == 0)
        return false;
    ll vertical = x / b;

    // avoid overflow: return true if vertical >= (n + horizontal - 1) / horizontal
    // i.e., vertical * horizontal >= n, but in safe form
    return vertical >= (n + horizontal - 1) / horizontal;
}

int main()
{
    ll w, h, n;
    cin >> w >> h >> n;

    ll beg = 0, end = 1e18;

    ll mid;

    while (beg < end)
    {
        mid = beg + (end - beg) / 2;
        // cout << beg << " " << end << " " << mid << endl;

        if (funcTest(mid, n, w, h))
        { // means true then include it but end it
            end = mid;
        }
        else
        {
            beg = mid + 1;
        }
    }

    cout << beg << endl;
}