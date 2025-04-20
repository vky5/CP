/*
the only optimal thing I am gonna do is is to check if for example
prefix sum for

0 2 -1 3 5 -2 is something like
0 2 1 4 8 7

then check if there exists a number

because if target = 2

then for 0, if 0 + 2 exists in front of 0 then there is subarray count

if for next it is 2 then if there exist 2 + 2 = 4 in sub array ahead of that 2
then there is a subarray

this is gonna use more memory but will solve it in less time

Date: 17/04/2025
time: 2:30 PM
*/

#include <iostream>
#include <map>
#include <vector>
 
using namespace std;
using ll = long long int;
 
int main(){
    ll n, x; cin>>n>>x;
    vector<ll> ls(n+1);
    map<ll, ll> record;
    
    record[0] = 1;
 
    for (ll i= 0; i<n; i++){
        ll tmp; cin>>tmp;
        ls[i+1] = ls[i] + tmp;
        record[ls[i+1]]++;
    }
    
    ll count = 0;
    for (ll i = 0; i<=n; i++){
            record[ls[i]]--;
            count+=record[ls[i]+x];
    }
 
    cout<<count<<endl;
 
 

}
