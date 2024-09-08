/*
https://usaco.org/index.php?page=viewproblem2&cpid=1060
problem 2: Daisy Chains
*/


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n; 

    vector<int> ls(n); 

    for (int i = 0; i<n; i++) cin>>ls[i];

    int ans = 0;

    for (int i = 0; i<n; i++){
        int count = ls[i];
        for (int j = i; j<n; j++){

            if (i!=j) count+=ls[j];
            int tmp = count/ (j-i+1);

            for (int k = i; k<=j; k++){
                if (tmp==ls[k] && count%(j-i+1)==0){
                    ans++;
                    break;
                }
            }

        }

    }

    cout<<ans<<endl;
    return 0;
}