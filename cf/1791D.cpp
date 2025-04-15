#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        set<char> a, b;
        unordered_map<char, int> b_cnt;

        for (char x : s){
            b.insert(x);
            b_cnt[x]++;
        }

        size_t ans = 0;
        for (char x: s){
            a.insert(x);
            b_cnt[x]--;

            if (b_cnt[x] == 0){
                b.erase(x);
            }

            ans = max(a.size() + b.size(), ans);
        }

        cout << ans << endl;
    }

    return 0;
}
