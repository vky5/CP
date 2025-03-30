#include <iostream>
#include <string>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int zero = 0, one = 0;
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == '1') {
        one++;
      } else {
        zero++;
      }
    }
    int i;
    
    // cout<<zero<<" "<<one<<endl;
    for (i = 0; i < s.length(); i++) {
      if (s[i] == '0') {
        if (one - 1 >= 0) {
          one--;
        } else {
          break;
        }
      } else {
          if (zero - 1 >= 0) {
            zero--;
          } else {
            break;
          }
      }
    }

    cout << s.size() - i << endl;
  }
}
