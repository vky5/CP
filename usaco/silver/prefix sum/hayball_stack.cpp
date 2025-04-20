#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long int;

int main(){
    ll n, k; cin>>n>>k;

    vector<ll> tmp(n+1); // creating difference array

    while(k--){
        ll l, r; cin>>l>>r;
        tmp[l-1]++;
        tmp[r] --;
    }
    
    vector<ll> sol(n);
    ll total = 0;
    for (int i = 0; i < n; i++) {  // build the actual array of at what position, what is the height of the array
		total += tmp[i];
		sol[i] = total;
	}

    sort(sol.begin(), sol.end());

    // for (auto x: sol) cout<<x<<' '; cout<<endl;
    cout<<sol[n /2]<<endl;

}
