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
            ll n;
            cin >> n;

            vector<ll> second_elem;
            ll lowst_elem = INT_MAX;
    

            for (ll i = 0; i < n; ++i)
            {
                ll m;
                cin >> m;
                vector<ll> t2(m);
                for (ll j = 0; j < m; ++j)
                {
                    cin >> t2[j];
                }

                sort(t2.begin(), t2.end());

                second_elem.push_back(t2[1]);
                lowst_elem = min(lowst_elem, t2[0]);
                
            }

            sort(second_elem.begin(), second_elem.end());
            ll ans = 0;
            for (int i=  1; i<n; i++){
                ans +=second_elem[i];
            }

            ans+=lowst_elem;

            cout<<ans<<endl;
        }

        return 0;
    }
