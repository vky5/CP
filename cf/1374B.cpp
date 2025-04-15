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

        ll cnt2 = 0, cnt3 = 0;
        ll fac2 = 2, fac3 = 3;

        ll tmp = n;

        while (tmp % fac2 == 0 && tmp >= fac2)
        {
            fac2 *= 2;
            cnt2++;
        }

        while (tmp % fac3 == 0 && tmp >= fac3)
        {
            fac3 *= 3;
            cnt3++;
        }

        fac2 /= 2;
        fac3 /= 3;
        // cout << fac2 << " " << fac3 << endl;

        tmp/=fac2;
        // cout<<tmp<<endl;
        if (tmp==fac3){
            if (cnt2==cnt3){
                if (cnt2==0){
                    cout<<0<<endl;
                }else{
                    cout<<cnt2<<endl;
                }
            }else if (cnt2>cnt3){
                cout<<-1<<endl;
            }else{
                cout<<(2*cnt3 - cnt2)<<endl;
            }
        }else{
            cout<<-1<<endl;
        }


    }
}