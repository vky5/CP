Problem Statement: https://codeforces.com/problemset/problem/272/A
Date: 2025-02-15
Started: 01:07PM
Ended: 01:15PM
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int n; cin>>n;
    int total = 0; 
    for (int i = 0; i<n; i++){
        int x; cin>>x;
        total += x;
    }
    
    
    int ans = 0;
    
    for (int i = 1; i<=5; i++){
        if ((total + i)%(n+1)!=1){
            ans++;
        }
    }
    cout<<ans<<endl;
}