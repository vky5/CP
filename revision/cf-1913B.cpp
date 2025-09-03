#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int z = 0, o = 0; // z - zero, o - one
    for (char x : s) {
      if (x == '0') {
        z++;
      } else {
        o++;
      }
    }
    
    
    int ans = 0;
    for (char x : s) {
      if (x == '0') {
        if (o > 0) {
          o--;
        } else {
          ans = z;
          break;
        }
      }

      if (x == '1') {
        if (z > 0) {
          z--;

        } else {
          ans = o;
          break;
        }
      }
    }

    cout << ans << endl;
  }

  return 0;
}
