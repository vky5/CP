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

ll n; 
vector<ll> ls;
ll ans = INT_MAX;

void divideIntoGrps(ll index, ll sum1, ll sum2){
    if (index==n){
        ans = min(ans, abs(sum1- sum2));
        return;
    }

    sum1+=ls[index];
    divideIntoGrps(index+1, sum1, sum2);

    sum1-=ls[index];
    sum2+=ls[index];

    divideIntoGrps(index+1, sum1, sum2);
    sum2-=ls[index];
}

int main(){
    cin>>n; 

    for (ll i = 0; i<n; i++){
        ll tmp; cin>>tmp;
        ls.push_back(tmp);
    }

    divideIntoGrps(0, 0, 0);

    cout<<ans<<endl;
    
    return 0;
}