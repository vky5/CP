/*
https://usaco.org/index.php?page=viewproblem2&cpid=639
date: 03/09/2024

in this question, the order in which diamods are kept are not mattered the only thing that mattered is the fact that no two diamond should have difference more than k

*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("diamond.in", "r", stdin);
	freopen("diamond.out", "w", stdout);
    int n, k; cin>>n>>k;
    vector<int> ls(n);
    for (int i=  0; i<n; i++)cin>>ls[i];

    sort(ls.begin(), ls.end());

    int ans = 0;
    for (int i = 0; i<n; i++){
        int counter = 1; // because in worst case if we select a diamond with which we cant keep any diamond it still have one diamond
        for (int j = i+1; j<n; j++){
            if ((ls[j]-ls[i])<=k){
                counter++;
            }
        }

        ans = max(ans, counter);
    }

    cout<<ans<<endl;
    return 0;
}