#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;
    int arr[26] = {0};

    for (int i = 0; i < n; i++) {
      arr[s[i] - 'a']++;
    }

    int odd = 0, even = 0;

    for (int i = 0; i < 26; i++) {
      if (arr[i] % 2 == 0) {
        even++;
      } else {
        odd++;
      }
    }
    
    
    if (odd==0 || odd ==1){
        cout<<"yes"<<endl;
    }else if (odd -k <=1){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
  }
}
