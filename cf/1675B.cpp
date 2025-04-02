#include <iostream>
#include <vector>


using namespace std;
using ll = long long int;

// we are gonna use this that 2 ^ 30 approx     10 ^ 9 and n <= 30 so
int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> ls(n);
        vector<ll> tmp2 = ls;

        for (ll i = 0; i < n; i++)
            cin >> ls[i];
        // I need to make it smallest so the smallest number that can be made is 1 or 0

        // but we need to find min making everyone small will not be optimal solution
        // take the last number as reference and make other smaller to meet the condition with that number

        // ll pw = log(ls[0])/log(2);

        // ls[0] = pow(2, pw);
        ll count = 0;
        // bool contd = true;
        for (ll i = n - 2; i >= 0; i--){
            // cout << tmp << " " << ls[i + 1] << endl;
            // cout<<"-------------------------------"<<endl;
            while (ls[i] >= ls[i +1 ])
            {
                count++;
                // cout<<tmp<<" "<<ls[i+1]<<" "<<count<<endl;
                ls[i] /= 2;

                if (ls[i]==0){
                    break;
                }
            }
            
            if (ls[i]==0 && ls[i+1]==0){
    
                count = -1;
                break;
            }
        }

        cout << count << endl;
    }

    return 0;
}