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
      cin >> ls[i].second; // max number of ppl that villager can share to 
    }

    for (int i = 0; i < n; i++) {
      cin >> ls[i].first; // cost of sharing per villiger
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

    int count = n;
    int value = 0;
    int prev = p;
    int diff = 0;

    for (int i = 0; i<n && count;i++){
        value+=p;
        count--;
        
    }
    
    value += count * p;

    cout << value << endl;
  }

  return 0;
}
