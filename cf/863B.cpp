/* 
link: https://cses.fi/problemset/task/1621
date: 10-06-24 at 11 19 PM eariler two question was yesterday after 12
desc: maths exam on 11 ;) We brute force and eliminate 2 kayakes (i, j) and then normally calculate the total error
solved in: 13 min
number of attempts: idk
*/

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin>>n;
    n*=2;

    int ls[n];

    for (int i = 0; i<n; i++) cin>>ls[i];
    
    sort(ls, ls+n);
    int ans = INT_MAX;


    for (int i = 0; i<n; i++){ 
        for (int j = i+1; j < n; j++){
            int tmp = 0; 
            vector<int> nx;

            for (int k = 0; k<n; k++){
                if (k!=i && k!=j){
                    nx.push_back(ls[k]);
                }
            }

            for (int k = 0; k<n-2; k+=2){
                tmp+=(nx[k+1]-nx[k]);
            }

            ans = min(ans, tmp);

        }
    }

    cout<<ans<<endl;
    return 0;
}