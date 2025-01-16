#include <bits/stdc++.h>
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int k, n; cin>>k>>n;
    
    vector<int> marks(k+1);
    vector<int> rem(n);
    
    for (int i = 1; i<=k; i++){
        int tmp; cin>>tmp;
        marks[i] = tmp + marks[i-1];
    }
    
    for (int i = 0; i<n; i++) cin>>rem[i];
    
    set<int> initial_numbers;
    
    for (int i = 1; i<=k; i++){
        initial_numbers.insert(rem[0]-marks[i]);
    }
    
    int ans = 0;
    
    for (int s: initial_numbers){
        set<int> points;
        
        for (int i = 1; i<=k; i++) points.insert(s+marks[i]);
        
        bool valid = true;
        
        for (int p: rem) valid &= points.count(p);
        
        ans+=valid;
    }
    
    cout<<ans<<endl;
}