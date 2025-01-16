// USACO Silver
// https://usaco.org/index.php?page=viewproblem2&cpid=667
// Problem on 15/01/2024

#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

int main() {
  freopen("citystate.in", "r", stdin);
  freopen("citystate.out", "w", stdout);
  int n;
  cin >> n;

  map<string, vector<string>> m;

  for (int i = 0; i < n; i++) {
    string tmp1, tmp2;
    cin >> tmp1 >> tmp2;
    m[tmp2].push_back(tmp1);
  }

  int count_special = 0;
  for (auto x : m) {
    // if MIAMI is FL
    //  Flint is MI then it is a pair
    //  here x,first is FL and Miami dholakpur like cities are listed
    for (string s : x.second) {
      string firstTwo = s.substr(0, 2);
      // cout<<x.first<<" "<<firstTwo<<endl;
      if (firstTwo!=x.first && m.count(firstTwo) != 0) {
        for (string r : m[firstTwo]) {
          if (r.substr(0, 2) == x.first) {
            count_special++;
          }
        }
      }
    }
  }

  cout << count_special / 2 << endl;
}
