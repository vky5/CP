#include <iostream>
#include <cmath>
#include <climits>

using namespace std;
using ll = long long int;

ll gcd(ll a, ll b){
    if (a==0 || b==0){
        return max(a, b);
    }

    return gcd(min(a, b), max(a, b)- min(a, b));
}

int main(){
    ll t; cin>>t;

    while(t--){
        ll n; cin>>n;

        ll ar = n/2;
        ll an = n - ar; // this can be greater than ar so reduce ar and increase an;
        ll min = INT_MAX;
        ll ans[3] = {INT_MAX,0,0};
        while(ar!=0){
                ll lcm = (ar/ gcd(ar, an))*an;

                if (ans[0]>lcm){
                    ans[0] = lcm;
                    ans[1] = ar;
                    ans[2] = an;
                }

                ar--;
                an++;
        }

        cout<<ans[1]<<" "<<ans[2]<<endl;

    }
}