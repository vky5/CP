#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, p;
    cin >> n >> p;
    vector<pair<int, int>> ls(n);

    for (int i = 0; i < n; i++) {
      cin >> ls[i].second;
    }

    for (int i = 0; i < n; i++) {
      cin >> ls[i].first;
    }

    sort(ls.begin(), ls.end(),
         [](pair<int, int> &a, pair<int, int> &b) -> bool {
           if (a.first < b.first) {
             return true;
           } else if (a.first == b.first) {
             return a.second > b.second;
           }

           return false;
         });
    
    for (auto x: ls){
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    cout<<"==========="<<endl;
    int count = n;
    int value = 0;

    for (int i = 0; i < n && count; i++) {
      if (ls[i].first < p) {
        value += p;
        value += (ls[i].first * min(ls[i].second, count - 1));
        count--;
        
        cout<<ls[i].second<<endl;
        
        if (count-ls[i].second<0){
            count = 0;
        }else{
            count -= ls[i].second;
        }
        
        
      } else {
        break;
      }
    }

    value += count * p;

    cout << value << endl;
  }

  return 0;
}
