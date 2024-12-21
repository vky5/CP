/*
USACO Bronze
https://usaco.org/index.php?page=viewproblem2&cpid=893
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("guess.in", "r", stdin);
  freopen("guess.out", "w", stdout);

  int n;
  cin >> n;

  vector<vector<string>> ls(n);

  for (int i = 0; i < n; i++) {
    string name;
    cin >> name;
    int tmp;
    cin >> tmp;
    for (int j = 0; j < tmp; j++) {
      string tmp2;
      cin >> tmp2;
      ls[i].push_back(tmp2);
    }
  }

  int ans = 0;
  
  for (int i = 0; i<n; i++){
      for (int j = i+1; j<n; j++){
          int common = 0; // to find the common characterstics between cows
          
          for (const auto &char1: ls[i]){
              for (const auto &char2: ls[j]){
                  if (char1==char2){
                      common++;
                      break;
                  }
              }
          }
          
          ans = max(ans, common);
      }
  }

  cout << ans + 1 << endl;
}
