#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long int;

int main(){
    // freopen("diamond.in", "r", stdin);
    // freopen("diamond.out", "w", stdout);
    
    ll n, k; cin>>n>>k;
    
    vector<ll> ls(n);
    for (ll i = 0; i<n; i++) cin>>ls[i];
    
    sort(ls.begin(), ls.end());
    
    ll left = 0, right = 0;
    vector<ll> ans;
    ll lcl = 0;
    
    for (auto x: ls) cout<<x<<" "; cout<<endl;
    while(left<n && right<n){
        cout<<ls[right]<<" "<<ls[left]<<" "<<right<<endl;
        while((ls[right] - ls[left])<=k && right<n){
            lcl++;
            cout<<ls[right]<<" : "<<lcl<<endl;
            right++;
        }
        
        if (right==n) ans.push_back(lcl);
        
        if ((ls[right]-ls[left])>k){
            cout<<ls[right-1]<<" "<<ls[left]<<" "<<lcl<<endl;
            ans.push_back(lcl);
            lcl = 0;
            left = right;
            cout<<ls[left]<<endl;
            cout<<" --------"<<endl;
        }
    }
    
    sort(ans.rbegin(), ans.rend());
    for (auto x: ans) cout<<x<<" "; cout<<endl;
    cout<<ans[0] + ans[1]<<endl;
    
    return 0;   
}