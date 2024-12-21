// https://usaco.org/index.php?page=viewproblem2&cpid=617
// USACO 2016 February Bronze

#include <bits/stdc++.h>
#include <climits>
#include <vector>

using namespace std;

int main() {
  freopen("balancing.in", "r", stdin);
  freopen("balancing.out", "w", stdout);
  int n, b;
  cin >> n >> b;
  vector<pair<int, int>> ls(n);

  int in_x = INT_MAX, st_x = 0, in_y = INT_MAX, st_y = 0;

  for (int i = 0; i < n; i++) {
    cin >> ls[i].first >> ls[i].second;
    in_x = min(ls[i].first, in_x);
    st_x = max(ls[i].first, st_x);

    in_y = min(ls[i].second, in_y);
    st_y = max(ls[i].second, st_y);
  }

  set<int> frdx, frdy;

  for (int i = 0; i < n; i++) {
    frdx.insert(ls[i].first);
    frdy.insert(ls[i].second);
  }

  // there are 4 cases depending on which side the cows are
  int ans = INT_MAX;
  for (const auto &i : frdx) {
    for (const auto &j : frdy) {

      int q1 = 0, q2 = 0, q3 = 0, q4 = 0;
      for (int x = 0; x < n; x++) {
        if (ls[x].first > i+1 && ls[x].second > j+1)
          q2++;
        else if (ls[x].first > i+1 && ls[x].second < j+1)
          q1++;
        else if (ls[x].first < i+1 && ls[x].second > j+1)
          q3++;
        else if (ls[x].first < i+1 && ls[x].second < j+1)
          q4++;
      }

      ans = min(max(q1, max(q2, max(q3, q4))), ans);
    }
  }

  cout << ans << endl;

  return 0;
}
