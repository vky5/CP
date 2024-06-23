/* 
link: https://codeforces.com/contest/1808/problem/B
date: 23 June 2024
desc: yesterday was my maths exam and I dont know when was the last time I submitted any code
solved in: 14 min
number of attempts: 2
this question was not difficult but it took me far more time to implement and I came up with a complicated solution when easier solution was right in front of me. 

*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main(){
    ll t; cin>>t;

    while (t--)
    {
        ll n, m;
        cin>>n>>m;
        ll ls[m][n];

        for (ll i = 0; i<n; i++){
            for (ll j = 0; j<m; j++){
                cin>>ls[j][i];
            }
        }

        ll ans = 0;

        for (ll i = 0; i<m; i++){
            sort(ls[i], ls[i] + n, greater<int>());
            ll factor = n - 1;

            for (int j = 0; j<n; j++){
                // ans+=(ls[i][j]*(n-j-1)-ls[i][j]*(j));
                ans += factor * ls[i][j];
                factor-=2;

                // ans+=(ls[i][j] - ls[i][]  5 - 4 + 5 - 3 + 5 - 2 + 5 - 1 + 4 - 3 + 4 - 2 + 4 - 1 + 3 - 2 + 3 - 1 + 2 - 2
                // 7* (n-1) + 3 * (n-3) + 1 * (n-5)
                // this is much more simpler approach then I have implemented 

            }
        }

        cout<<ans<<endl;
    }
    
}