#include <iostream>

using namespace std;
using ll = long long int;

int main(){
  ll t; cin>>t; 
  while(t--){
    ll n, k, x; cin>>n>>k>>x; 

    ll initSum = 0, lastSum = 0;
    
    
    initSum = (k*(k+1))/2;
    
    lastSum = (n*(n+1))/2 - ((n-k)*(n-k + 1))/2;
    
    if (x>=initSum && x<=lastSum){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    
  }
}