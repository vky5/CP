/*
USACO Bronze
https://usaco.org/index.php?page=viewproblem2&cpid=1011
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("triangles.in", "r", stdin);
    freopen("triangles.out", "w", stdout);
    int n; cin>>n;
    vector<pair<int, int>> ls(n);

    for (int i = 0; i<n; i++){
        cin>>ls[i].first>>ls[i].second;
    }

    sort(ls.begin(), ls.end());

    int maxArea = 0;

    for (int i = 0; i<n; i++){
        pair<int, int> tmp = ls[i];
        int x_dis, y_dis;
        for (int j = 0; j<n; j++){
            if (tmp.first==ls[j].first ^ tmp.second==ls[j].second){
                if (tmp.first==ls[j].first){
                    y_dis = abs(tmp.second-ls[i].second);
                    for (int x = 0; x<n; x++){
                        if (tmp.second==ls[x].second){
                            x_dis = abs(tmp.first-ls[x].first);
                            maxArea = max(maxArea, x_dis*y_dis);        
                        }
                    }
                }else{
                    x_dis = abs(tmp.first-ls[j].first);
                    for (int x = 0; x<n; x++){
                        if (tmp.first==ls[x].first){
                            y_dis = abs(tmp.second-ls[x].second);        
                            maxArea = max(maxArea, x_dis*y_dis);
                        }
                    }
                }
            }
        }
    }

    cout<<maxArea<<endl;
}