/*
Link: https://codeforces.com/gym/104520/problem/H
Problem started: 1:00 PM on 09/01/2024
Solved Partially: 2:10PM
Desc: since the addition is adding the elements multiple times we need to find the coefficient of those number and then
multiply it by the array a and then sort it. we then use greedy that is to minimize it multiply min number by max number


for example for 5 the number of coefficient of subarray is 
5 9 11 11 9 5

therefore we are going to multiply a[i] by coeffiecient and then sort it

and then multiply it by b[i] in greedy fashion to minimize the result
*/

#include <bits/stdc++.h>
#include <vector>

using namespace std;
using ll = long long int;

int main(){
    ll n; cin>>n;
    vector<ll> a(n);
    
    vector<ll> b(n);
    
    for (ll i = 0; i<n; i++) cin>>a[i];
    for (ll i = 0; i<n; i++) cin>>b[i];
    
    vector<ll> coefficient(n);
    // for (ll i = 1; i<=n; i++){ // elements possible in subarray
    //     for (ll j = 0; i+j<=n; j++){ // for the subgroup 1 it will be 0
    //         ll k = j;
    //         while(k<j+i){
    //             coefficient[k]++;
    //             k++;
    //         }
    //     }
    // }
    // 
    for (int i = 0; i<n; i++){
        coefficient[i] = (i+1)*(n-i);
    }
    
    for (ll i = 0; i<n; i++){
        coefficient[i] = a[i]*coefficient[i];
    }
    
    sort(coefficient.rbegin(), coefficient.rend());
    
    sort(b.begin(), b.end());
    ll ans = 0;
    for (ll i = 0; i<n; i++){
        ans+=coefficient[i]*b[i];
    }
    
    cout<<ans<<endl;
}