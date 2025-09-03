#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ls(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ls[i];
        }
        int GCD = __gcd(ls[0], ls[1]);

        for (int i = 2; i < n; i++){
            GCD = __gcd(GCD, ls[i]);
        }


        int count = 0;
        for (auto x: ls){
            if (x==GCD) count++;
        }

        if (count == 0){
            cout<<n+1<<endl;
        }else{
            cout<< n - count<<endl;
        }
    }
}