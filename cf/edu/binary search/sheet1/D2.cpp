#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main(){
    int n; cin>>n;

    vector<ll> ls(n);

    ll max_val = 0; 
    
    
    for (int i = 0; i<n; i++) {
        cin>>ls[i];
        max_val = max(max_val, ls[i]);
    }
    ll prefix_sum[max_val+1] = {0};

    sort(ls.begin(), ls.end());
    for (int i = 1; i<=n; i++){
        prefix_sum[i] = prefix_sum[i-1];

        if (ls[i]>0){
            prefix_sum[i]++;
        }
    }

    sort(ls.begin(), ls.end());


}