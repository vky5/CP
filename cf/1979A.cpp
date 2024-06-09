/* 
link: https://codeforces.com/contest/1979/problem/A 
date: 10-06-24
desc: maths exam on 11 ;)
solved in: 7 min
number of attempts: 1
*/


#include <bits/stdc++.h>
#include <iostream>


using namespace std;
using ll = long long int;

int main(){

    ll t; cin>>t;
    while (t--){
        ll n; cin>>n; 
        vector<ll> ls(n);

        for (ll i = 0; i<n; i++) cin>>ls[i];

        ll ans = INT_MAX;

        for (ll i = 0; i<n-1; i++){
            ans = min(max(ls[i], ls[i+1])-1, ans);
        }

        cout<<ans<<endl;
    }

    return 0;
}