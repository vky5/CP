/* 
link: https://cses.fi/problemset/task/1623
date: 13-06-24
desc: 
solved in: 
number of attempts: 1
*/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int sumOfVector(vector<int> tmp){
    int ans =0;
    for (auto x: tmp){
        ans+=x;
    }

    return ans;
}


int minBet(vector<int> ls, int n, int i, int j){
    vector<int> l1, l2;

    l1.push_back(ls[i]); l2.push_back(ls[j]);

    for (int x = 0; x<n;x++){
        if (x!=i && x!=j){
            if (sumOfVector(l1)>=sumOfVector(l2)){
                l2.push_back(ls[x]);
            }
        }
    }

    return abs(sumOfVector(l1)-sumOfVector(l2));
}


int main(){
    int n; cin>>n;

    vector<int> ls(n);

    for (int i = 0; i<n; i++){
        cin>>ls[i];
    }

    sort(ls.begin(), ls.end());

    int ans = INT_MAX;
    for (int i = 0; i<n; i++){
        for (int j = 0;j<n; j++){
            if (i!=j){
                // cout<<minBet(ls, n, i, j)<<" "<<ls[i]<<" "<<ls[j]<<endl;
                ans = min(ans, minBet(ls, n, i, j));
            }
        }
    }

    cout<<ans<<endl;

    return 0;
}