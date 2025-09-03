#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, p;
    cin >> n >> p; // n villagers p cost

    vector<pair<int, int>> villagers(n);

    for (int i = 0; i < n; i++) {
      int a, b;
      cin >> a >> b;
      villagers[i] = make_pair(b, a); // we kept cost first and numbers later
    }

    // this func will sort so that the villagers with min cost comes first and
    // if 2 have cost then we first put who can share it to more ppl
    sort(villagers.begin(), villagers.end(),
         [](pair<int, int> a, pair<int, int> b) {
           if (a.first != b.first) {
             return b.second > a.second;
           }

           return a.first < b.first;
         });

    // finding the net cost
    int guysWhoKnows = 1;
    int cost = p;
    vector<int> canTell;

    if (villagers[0].first < p) {
      canTell.push_back(0);
    }
    
    int currentVillagerShouting = 0;

    for (int i = 1; i < n; i++) {
        if (villagers[i].first<p){
            canTell.push_back(i);
        }
        
        if (canTell.size()==0){
            cost+=p;
        }else if(villagers[currentVillagerShouting].second>0){
            cost+=villagers[canTell[currentVillagerShouting]].first;
            villagers[canTell[currentVillagerShouting]].second--;
        }
        
        
        
    }
    
    cout<<cost<<endl;
  }
  return 0;
}


