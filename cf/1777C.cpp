
#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main(){
    int n, m; cin>>n>>m;
    vector<int> ls(n);
    
    for (int i =0; i<n; i++){
        cin>>ls[i];
    }
    
    sort(ls.begin(), ls.end());
    
    int ans = INT_MAX;
    for (int right = 0; right<n; right++){
        
    }
}