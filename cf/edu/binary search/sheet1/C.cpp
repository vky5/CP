#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main(){
    ll n, k; 
    cin >> n >> k;

    vector<ll> ls(n), target(k);

    for(ll i = 0; i < n; i++) {
        cin >> ls[i];
    }

    for (ll i = 0; i < k; i++) {
        cin >> target[i];
    }

    for (ll i = 0; i<k; i++){
        ll beg = 0, end = n;

        while(beg<end){
            ll mid =beg + (end - beg) / 2;

            if (ls[mid]>=target[i]){
                end = mid; // we want to include mid this time
            }else{
                beg = mid + 1; // hme chota to include hi nhi krna apne answer mei target se
            }
        }

        cout<<beg+1<<endl;
    }
}