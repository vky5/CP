#include <iostream>
#include <vector>

using namespace std;
using ll = long long int;

ll x_sum(ll n){
    return ((n)*(n+1))/2;
}

int main(){
    ll t; cin>>t;
    while(t--){
        ll n, k, q;
        cin>>n>>k>>q;

        vector<ll> ls;

        ls.push_back(0);

        for (int i = 0; i<n; i++){
            int tmp; cin>>tmp;

            // hm yha pr range find krne ka try kr rhe jo continously q se km ho to hm us range mei phele error find krenge
            if (tmp>q){

                // cout<<tmp<<" "<<i+1<<endl;`
                ls.push_back(i+1);
            }
        }

        ls.push_back(n+1);

        
        if (ls.size()==2){
            cout<<x_sum(n-k+1)<<endl;
            continue;
        }

        ll total = 0;
        for (int i = 1; i<ls.size(); i++){
            // cout<<ls[i]<<" "<<ls[i-1]<<" "<<ls[i] - ls[i-1]-1<<endl;

            int tmp = ls[i] - ls[i-1] -1;
            if (tmp>=k) total += x_sum(tmp - k + 1); 
            // cout<<tmp<<" "<<k<<endl;
        }
        // cout<<endl;
        cout<<total<<endl;

        // cout<<"---------------------------------- "<<t<<endl;
        
        
    }
}
