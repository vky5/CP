/*
Problem started: 9:45AM
Problem ended: 9:52AM
No. of attempts: 1
date: 07/01/2025
desc: In this question, we just need to sort all the money cows are willing to offer and set it as the price of college and then check for every values
link: https://usaco.org/index.php?page=viewproblem2&cpid=1251
*/

#include <bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long int;

int main(){
    ll n; cin>>n;
    vector<ll> ls(n);
    
    for (ll i = 0; i<n; i++) cin>>ls[i];
    
    sort(ls.begin(), ls.end());
    
    ll ans = 0, num = -1;
    for (ll i = 0; i<n; i++){
        ll tmp = ls[i] * (n-i);
        
        if (tmp>ans){
            ans = tmp;
            num = n-i;
        }
    }
    
    cout<<ans<<" "<<ans/num<<endl;
    
    return 0;
}

