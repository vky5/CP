#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long int;


int main(){
    ll n, target; cin>>n>>target;

    vector<pair<ll, ll>> ls(n);

    for (ll i = 0; i<n; i++) {
        cin>>ls[i].first;
        ls[i].second = i+1;
    }
    sort(ls.begin(), ls.end());
    ll i = 0, j = n-1;
    
    
    while(i<j){
        // cout<<ls[i]<<" "<<ls[j]<<endl;
        if ((ls[i].first + ls[j].first)==target){
            cout<<ls[i].second<<" "<<ls[j].second<<endl;
            return 0;
        }else if ((ls[i].first + ls[j].first)>target){
            j--;
        }else{
            i++;
        }
    }
    
    cout<<"IMPOSSIBLE"<<endl;
}
