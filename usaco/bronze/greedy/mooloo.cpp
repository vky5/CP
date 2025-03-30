#include <iostream>
#include <vector>

using namespace std;
using ll = long long int;

int main()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> ls(n);

    for (ll i = 0; i < n; i++)
        cin >> ls[i];

    ll i = 0;

    ll moonies = 0;
    while (i < n){

        ll tmp = i + 1;
        ll factor = 1 + k; // that is set to default if he needs to buy for only one day 
        while (tmp < n){
            if (ls[tmp] - ls[tmp-1] <= k){
                factor = (ls[tmp] - ls[i] + 1) + k;
                tmp++;
            }
            else{
                break;
            }
        }
        moonies += factor;

        i = tmp;
    }

    cout<<moonies<<endl;
}