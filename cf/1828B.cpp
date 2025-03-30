#include <bits/stdc++.h>

using namespace std;


int main(){
    int t; cin>>t;
    while(t--){
        int n, factor = 0;
        
        cin>>n;
        
        for (int i = 1; i<=n; i++){
            int x; cin>>x;
            
            factor = __gcd(factor, abs(x-i));
        }
        
        cout<<factor<<endl;
    }
}