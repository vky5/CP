// https://usaco.org/index.php?page=viewproblem2&cpid=739
// USACO silvetr cownomics


#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

int main(){
    freopen("cownomics.in", "r", stdin);
	freopen("cownomics.out", "w", stdout);
    int n, m; cin>>n>>m;
    
    vector<vector<char>> spotty(n, vector<char>(m)), plain(n, vector<char>(m)); 
    
    // for taking input of spotty cows 
    
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin>>spotty[i][j];
        }
    }
    
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin>>plain[i][j];
        }
    }
    
    //now we are going to create sets of size 3 from 3 different positions
    
    int ans = 0;
    
    for (int i = 0; i<m; i++){
        for (int j = i+1; j<m; j++){
            for (int k = j+1; k<m; k++){
                // the outer loop is moving to set 3 positions that we are checking for it to be distin
                // distinct
                
                set<string> st, pt;
                
                for (int x = 0; x<n; x++){
                    st.insert({spotty[x][i], spotty[x][j], spotty[x][k]});
                    pt.insert({plain[x][i], plain[x][j], plain[x][k]});
                    
                }
                
                
                // now to check if any of the position matches
                bool distinct = true;
                for (const auto &triplets: st){
                    if (pt.count(triplets)){
                        distinct = false;
                        break;
                    }
                }
                
                if (distinct) ans++;
                
            }
        }
    }
    
    cout<<ans<<endl;
    
    return 0;
}