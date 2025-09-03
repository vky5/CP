#include <iostream>
#include <vector>

using namespace std;
using ll = long long int;

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll count = 0; // count the number of subarray that is non zero
        vector<ll> ls(n);
        
        for (ll i = 0; i<n; i++){
            cin>>ls[i];
        }
        
        bool startOfNonZero =  false;
        
        for (ll i = 0; i<n; i++){
            if (ls[i]!=0){
                startOfNonZero = true;
            }else if (ls[i]==0 && startOfNonZero){
                startOfNonZero = false;
                count++;
                
            }
            
            
        }
        
        if (startOfNonZero){
            count++;
        }
        
        if (count==0){
            cout<<0<<endl;
        }else if (count == 1){
            cout<<1<<endl;
        }else{
            cout<<2<<endl;
        }
    }
}