/*
Problem Statement: https://codeforces.com/problemset/problem/69/A
Date: 2025-02-15
Started: 01:00PM
Ended: 01:05PM
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;

  int x = 0, y = 0, z = 0;

  for (int i = 0; i < n; i++) {
    int tmp_x, tmp_y, tmp_z;

    cin >> tmp_x >> tmp_y >> tmp_z;

    x += tmp_x;
    y += tmp_y;
    z += tmp_z;

    if (x == 0 && y == 0 && z == 0) {
      cout << "YES";
      return 0;
    }
  }
  cout << "NO";

  return 0;
}