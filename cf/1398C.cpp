#include <iostream>
#include <vector>
#include <map>

using namespace std;
using ll = long long int;

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n; string s; cin>>s;
        vector<ll> ls(n+1);
        map<ll, ll> record;
        record[0] = 1; 
        
        ll count = 0;
        
        
        for (ll i = 1; i <= n; i++){
            ll tmp = s[i-1] - '0';
            ls[i] = tmp + ls[i-1];

            ll key = ls[i] - i;
            
            count += record[key];
    
            record[key]++;
        }

        cout << count << endl;
    }
}
