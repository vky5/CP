#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
using ll = long long int;

int main(){
    ll t; cin>>t;
    while(t--){
        ll n; cin>>n;
        char start; cin>>start;

        string s; cin>>s;

        ll  right = 0;
        ll ans = 0;
        
        reverse(s.begin(), s.end());
        // cout<<s<<endl;
        for (int left = 0; left<n; left++){
            if (s[left]=='g'){
                right = left+1;
                while (s[right%n]!='g') {
                    
                    if (s[right%n]==start){
                        ans = max(ans, right - left);
                    }
                    right++;
                }
                left = right-1;
            }
        }

        cout<<ans<<endl;

    }
}
