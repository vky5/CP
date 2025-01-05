/* 
link: https://cses.fi/problemset/task/1623
date: 13-06-24
desc: 
solved in: 
number of attempts: 1
*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

ll recursive_apples(ll index, ll sum1, ll sum2, ll target, vector<ll> ls){
    if (index==target){ 
        return abs (sum1 - sum2);
    }

    return min(recursive_apples(index+1, sum1+ls[index], sum2, target, ls), recursive_apples(index+1, sum1, sum2+ls[index], target, ls));
}

int main(){
    ll n; cin>>n;
    vector<ll> ls(n);

    for (ll i = 0; i<n; i++) cin>>ls[i];

    cout<<recursive_apples(0, 0, 0, n, ls)<<endl;

    return 0;
}