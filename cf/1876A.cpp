#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  int t; cin>>t;

  while(t--){
    int n,p; cin>>n>>p;
    vector<int> max_res(n);
    vector<pair<int, int>> costs;


    for (int i = 0; i<n; i++) cin>>max_res[i];
    
    for (int i = 0; i<n; i++){
      int tmp; cin>>tmp;
      costs.push_back(make_pair(tmp, max_res[i]));
    }

    sort(costs.rbegin(), costs.rend());
    int total =  0;
    int i = 0;
    for (i = 0; i<n; i++){
      
      if (costs[i].first>p){
        total+=p;
      }else{
        // here is gonna be the main logic... so first inform the villager with the least cost or hightest cost???

        // we should inform the least cost that is gonna inform the escond least cost 
        break;
        

      }
    }

    cout<<total<<endl;

    for (int j = n-1; j>i; j--){
      if (j - i + 1>0){
        total+=p;
        total+= min((j - i + 1) * costs[j].first , costs[j].first * costs[j].second);
        i += min(j - i + 1, costs[i].second);

      }  
    }

    cout<<total<<endl;

  }
}