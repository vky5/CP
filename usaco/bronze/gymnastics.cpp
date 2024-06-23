/* 
link: https://usaco.org/index.php?page=viewproblem2&cpid=963
date: 12-06-24 6 43 PM
desc: 
solved in: 2 min
number of attempts: I have solved it so many times I don't even remember
*/


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("gymnastics.in", "r", stdin);
	freopen("gymnastics.out", "w", stdout);

    int k, n; cin>>k>>n;
    int ls[k][n];
    for (int i = 0; i<k; i++){
        for (int j = 0; j<n; j++){
            cin>>ls[i][j];
        }
    }

    set<pair<int, int>> ans;
    for (int i = 0; i<k; i++){
        for (int j = 0; j<n; j++){ // typo here instead of n I had k
            for (int l = j+1; l<n; l++){
                if (ans.find(make_pair(ls[i][l], ls[i][j])) != ans.end()){
                    ans.erase(make_pair(ls[i][l], ls[i][j]));
                    
                }else if(i==0){
                    ans.insert(make_pair(ls[i][j], ls[i][l]));
                }
            }
        }
    }

    cout<<ans.size()<<endl;
    return 0;
}


/*
Not so difficult question had a typo. But took too damn long time.
Also not a great experience
this was a complete simulation question
*/