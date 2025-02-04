#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    // freopen("milkorder.in", "r", stdin);
    // freopen("milkorder.out", "w", stdout);
    int n, m, k; cin>>n>>m>>k;
    
    vector<int> ls(m);
    vector<int> cowpos(n+1, 0);
    
    for (int i = 0; i<m; i++) cin>>ls[i];
    
    map<int, int> pos;
    set<int> common;
    
    for (int i= 0; i<k; i++){
        int tmp; cin>>tmp;
        cin>>pos[tmp];
        cowpos[pos[tmp]] = tmp; // storing at what location which cow is present
    }
    
    for (int i = 0;i<m; i++){
        if (pos.count(ls[i])){
            common.insert(ls[i]);
        }
    }
    
    // for (auto x: common) cout<<x<<" "; cout<<endl;
    int lastErased = 0;
    for (int i = 0; i<m; i++){
        if (common.count(ls[i])){
            int counter = i-1;
            int j = pos[ls[i]]-1;
            while (counter>=0 && j>0){
                if (cowpos[j]!=0){
                    j--;
                }else{
                    cowpos[j] = ls[counter];
                    counter--;
                    j--;
                }
            }
            lastErased = ls[i];
            common.erase(ls[i]);
            
        }
    }
    
    for (int i = 0; i<m; i++){
        if (ls[i]==lastErased){
            int counter = m-1;
            int j = n;
            
            while (counter>i && j>0) {
                if (cowpos[j]!=0){
                    j--;
                }else{
                    cowpos[j] = ls[counter];
                    counter--;
                    j--;
                }
            }
        }
    }
    
    for (int i = 0; i<=n; i++) cout<<cowpos[i]<<" "; cout<<endl;
    
    for (int i = 1; i<=n; i++){
        if (cowpos[i]==0){
            cout<<i<<endl;
            break;
        }
    }
    
    return 0;
    
}