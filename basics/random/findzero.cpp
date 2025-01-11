#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int count = 0; // we are counting 0
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    if (tmp != 0) {
      cout << tmp;
    } else {
      count++;
    }
  }

  while (count--) {
    cout << 0 << endl;
  }
}
