#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll k, n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    freopen("race.in", "r", stdin);
    freopen("race.out", "w", stdout);

    cin >> k >> n;
    for (ll i = 0; i != n; ++i)
    {
        ll x;
        cin >> x;
        x = min(x, static_cast<ll>((sqrt(2*k+.25)-.5))); // this is the main part,,,,, the speed x can also be of certain type like it can it can be so large to cover entire trip that's why 
        // we calculate the min number possible
        
        ll a = sqrt(k + (x-1)*x / 2); // this is to calculate the maximum speed
        ll sum = a*a - (x-1)*x / 2; // this is to calculate the total distance travelled 
        // after going from 1 to a (max speed) then a to x 


        // and also to check if there is any remaining distance
        
        ll r = k - sum; // this is to find remaining distance
        
        ll count = 2*a - x; // 0 to a and then from a to x

        if (r!=0){ 
            if (r%a==0){ // we checked for max speed a for remaining distnace instead of r is becaues we want to maintain the max speed as much as we can and then declerate to r
                count+=(r/a);
            }else{
                count+=(r/a);
                count++; // if it is not divisible, it will have to travel extra distane of any other speed maybe a - 1 or it could be a -4  or even x too 
            }
        }

        cout<<count<<endl;


    }
}