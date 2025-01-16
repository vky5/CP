#include <bits/stdc++.h>
#include <climits>

using namespace std;

int main(){
    freopen("notlast.in", "r", stdin);
    freopen("notlast.out", "w", stdout);
    int n; cin>>n;
    map<string , int> m = {
        {"Bessie", 0},
        {"Elsie", 0},
        {"Daisy", 0},
        {"Gertie", 0},
        {"Annabelle", 0},
        {"Maggie", 0},
        {"Henrietta", 0}
    };
    
    for (int i = 0; i<n; i++){
        string cow; int tr; cin>>cow>>tr;
        m[cow] += tr;
    }
    
    set<int> tmp;
    
    int toRemove = INT_MAX;
    for (auto x: m){
        tmp.insert(x.second);
        // cout<<x.first<<" "<<x.second<<endl;
        toRemove = min(x.second, toRemove);
    }
    
    tmp.erase(toRemove);
    
    toRemove = INT_MAX;
    for (auto x: tmp){
        toRemove = min(x, toRemove);
    }
    
    
    string ans;
    int count = 0;
    for (auto x: m){
        if (x.second==toRemove){
            ans = x.first;
            count++;
        }
    }
    
    cout<<(count==1?ans:"Tie")<<endl;
    return 0;
}