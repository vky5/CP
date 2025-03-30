#include <iostream>
#include <vector>

using namespace std;
using ll = long long int;
int main()
{
    ll t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<ll> ls(n);
        ll count = 0;
        bool start = false;
        for (ll i = 0; i<n; i++){
            cin>>ls[i];

            if (ls[i]!=0 && !start){
                count++;
                start = true;
            }else if (ls[i]==0 && start){
                start = false;
            }
        }

        if (count==0){
            cout<<0<<endl;
        }else if (count==1){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }


    }
}