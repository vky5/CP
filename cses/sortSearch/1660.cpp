#include <iostream>
#include <vector>

using namespace std;
using ll = long long int;

int main(){
    ll n, target; cin>>n>>target;
    
    vector<ll> ls(n);
    
    for (ll i = 0; i<n; i++) cin>>ls[i];
    
    ll left= 0, sum = 0, ans = 0;
    for (ll i = 0; i<n; i++){
        sum+=ls[i];
        
        while(sum>target){
            sum-=ls[left];
            left++;
        }
        
        if (sum==target) ans++;
        
        
    }
    
    cout<<ans<<endl;
}
