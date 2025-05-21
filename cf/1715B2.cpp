#include <iostream>
#include <vector>
using namespace std;
using ll = long long int;
int main(){
    int t; cin>>t; while (t--)
    {
        ll  n, k, b, s; cin>>n>>k>>b>>s;

        // we are gonna calculate teh upper and lower bounds of s

        // we will make sure that the value of b is satisfied 

        // therefore if we have 5 places or n = 5 then we take first position to be k * b which when divided by k gives b and rest to be 0 this way we have something

        ll  lower_limit = k * b;

        // for upper limit, we add k - 1 to each of the n places because think it in modulus term, if k - 1 / k then it will be 0 and for (k - 1 + k *b)/k then w will get k divide fraction between k - 1/k and k *b /k

        ll  upper_limit = (k - 1)*n + k * b;

        // if s is between this two then good otherwise -1
        if (s<=upper_limit && s>=lower_limit){
            // this is now implementation to create the array

            vector<ll  > ans(n, 0);
            ans[0] = lower_limit;
            s-=lower_limit;

            for (ll i = 0; i<n; i++){
                ll  add = min(k - 1, s);
                ans[i]+=add;
                s-=add;
            }

            for (auto x: ans){
                cout<<x<<" ";
            }cout<<endl;

        }else{
            cout<<-1<<endl;
        }
    }
    
}