#include <iostream>

using namespace std;

using ll = long long int;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (n < 4 || n % 2 != 0)
        { // If n is odd or less than 4, it's impossible
            cout << -1 << endl;
            continue;
        }
        ll max_tyres = 0, min_typres = 0;

        // for max typres
        if (n % 6 == 0)
        {
            max_tyres = n / 6;
        }
        else if (n % 6 == 4)
        {
            max_tyres = n / 6 + 1;
        }
        else if (n % 6 == 2)
        {
            max_tyres = (n - 6) / 6 + 2;
        }
        else
        {
            cout << -1 << endl;
            continue;
        }

        // for min buses

        if (n % 4 == 0)
        {
            min_typres = n / 4;
        }
        else if (n % 4 == 2)
        {
            min_typres = (n - 4) / 4 + 1;
        }
        else
        {
            cout << -1 << endl;
            continue;
            ;
        }

        cout << max_tyres << " " << min_typres << endl;
    }
}