#include <iostream>
#include <vector>

using namespace std;
using ll = long long int;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        if (t==45) cout<<" Hey : ";
        // the largest limit
        ll large = s / k;

        if (b > large)
        {
            cout << -1 << endl;
            continue;
        }

        ll lower = 0;
        // for lower limit
        ll a = s / n; // this is the number that will be equal when divided that is An

        if (s % n == 0)
        {
            lower = (a / k) * n;
        }
        else
        {
            lower = (a / k) * (n - 1) + (s % n + a) / k;
        }

        vector<ll> ans;

        /*
        the code for building the lowerbound is incorrect and it is overcomplicating the stuff
        check for the case 5 3 0 3

        now I am gonna follow what was in docs
        other than this whole implementation is correct

        */
        if (lower <= b)
        {
            for (ll i = 0; i < n - 1; i++)
                ans.push_back(a);
            if (s % n == 0)
            {
                ans.push_back(a);
            }
            else
            {
                ans.push_back(s % n + a);
            }
            // cout<<" a "<< a<<endl;
            ll mx_limit_jo_km_ho_skta  = a % k;
            ll kitne_numbers_ki_kmi = b - (ans[0]/k)*(n - 1) - (ans[ans.size()-1]/k);
            ll number_hme_chaiye = ((ans[ans.size()-1]/k) + kitne_numbers_ki_kmi)*k - ans[ans.size()-1];

            for (ll i = 0; i<ans.size(); i++){
                // cout<<number_hme_chaiye<<" "<<mx_limit_jo_km_ho_skta<<endl;
                if (number_hme_chaiye>=mx_limit_jo_km_ho_skta){
                    number_hme_chaiye-=mx_limit_jo_km_ho_skta;
                    ans[i]-=mx_limit_jo_km_ho_skta;
                    ans[ans.size()-1]+=number_hme_chaiye;
                }else{
                    ans[i]-=number_hme_chaiye;
                    ans[ans.size()-1]+=number_hme_chaiye;
                    number_hme_chaiye = 0;
                }
            }

            for (auto x: ans) cout<<x<<" "; cout<<endl;

            
        }



        else
        {
            cout << -1 << endl;
        }
    }
}