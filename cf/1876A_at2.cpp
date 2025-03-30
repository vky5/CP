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
      cin >> ls[i].first; // max number of ppl that villager can share to
    }

    for (int i = 0; i < n; i++) {
      cin >> ls[i].second; // cost of sharing per villiger
    }

    sort(ls.begin(), ls.end(),
         [](pair<int, int> &a, pair<int, int> &b) -> bool {
           if (a.first > b.first) {
             return true;
           } else if (a.first == b.first) {
             return a.second < b.second;
           }

           return false;
         });

    for (auto x: ls){
        cout<<x.first<<" "<<x.second<<endl;
    }

    int count = n;
    int value = 0;

    for (int i = 0;i<n && count; i++){
        if (ls[i].second>p){
            continue;
        }

        value+=p; // handling the cost of the first villiger
        count--; // subtracting it from total number of villiger
        cout<<value<<endl;
        value += (ls[i].second * min(ls[i].first, count));
        cout<<ls[i].second<<" "<<ls[i].first<<" "<<count<<" "<<endl;

        if (count - ls[i].first<0){
            count = 0;
        }else{
            count -=ls[i].first;
        }

        cout<<"----------------------"<<endl;
    }


    value += count * p;

    cout << value << endl;
  }

  return 0;
}
