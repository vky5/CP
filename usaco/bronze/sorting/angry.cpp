/*
Problem started: 10:02AM

*/

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int right(int i, int t, vector<int> arr){
    int j, cnt = 0;
    
    for (j = i+1; j<(int)arr.size(); j++){
        if (abs(arr[i]-arr[j])>t) break;
        cnt++;
    }
    
    if (j==(int)arr.size()) return cnt;
    if (i==j-1) return 0;
    
    return cnt + right(j-1, t+1, arr);
}

int left(int i, int t, vector<int> arr){
    int j, cnt = 0;
    
    for (j = i-1; j>=0; j--){
        if (abs(arr[i] - arr[j])>t) break;
        cnt++;
    }
    
    if (j<0) return cnt;
    if (j+1==i) return 0;
    
    return cnt+left(j+1, t+1, arr);
}

int main(){
    freopen("angry.in", "r", stdin);
    freopen("angry.out", "w", stdout);
    int n; cin>>n; 
    vector<int> ls(n);
    
    for (int i = 0; i<n; i++) cin>>ls[i];
    
    sort(ls.begin(), ls.end());
    
    int ans = 0;
    for (int i = 0; i<n; i++){ 
        ans = max(left(i, 1, ls)+1+ right(i, 1, ls), ans);
    }
    
    cout<<ans<<endl;
}