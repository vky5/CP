/*
https://usaco.org/index.php?page=viewproblem2&cpid=595
Problem 2 Subsequences summing to sevens
USACO 2016
started in 4 06 PM 
completed in 4 15 PM 9 mins
today is 17 08 2024
*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main(){
    freopen("div7.in", "r", stdin);
	freopen("div7.out", "w", stdout);
    ll n; cin>>n; 
    vector<ll> ls(n+1); 
    for (ll i = 1; i<n+1; i++){
        ll tmp; cin>>tmp;

        ls[i] = ls[i-1]+ tmp;
    }
    ll ans = 0;

    for (ll i = 0; i<n+1; i++){
        for (ll j = i+1; j<n+1; j++){
            if ((ls[j]-ls[i])%7==0){
                ans= max(ans, j-i);
            }
        }
    }

    cout<<ans<<endl;
}