#include <iostream>
#include <unordered_map>
#include <set>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    set<char> unique;
    for (auto x : s) unique.insert(x);
    int total_types = unique.size();

    unordered_map<char, int> cnt;
    int ans = INT_MAX;
    int left = 0;
    int types_collected = 0;

    for (int right = 0; right < n; ++right) {
        cnt[s[right]]++;
        if (cnt[s[right]] == 1) types_collected++; // first time this type appears

        // shrink from left while we have all types
        while (types_collected == total_types) {
            ans = min(ans, right - left + 1);

            cnt[s[left]]--;
            if (cnt[s[left]] == 0) types_collected--; // lost one type
            left++;
        }
    }

    cout << ans << endl;
}
