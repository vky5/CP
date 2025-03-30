#include <iostream>
#include <set>
#include <utility>

using namespace std;

int main() {
  int t;
  cin >> t;

  int coordinates_x[4] = {1, -1, 1, -1};
  int coordinates_y[4] = {1, -1, -1, 1};
  while (t--) {
    int a, b, x_king, y_king, x_queen, y_queen;
    cin >> a >> b >> x_king >> y_king >> x_queen >> y_queen;

    set<pair<int, int>> king, queen;
    for (int i = 0; i < 4; i++) {
      king.insert(make_pair(x_king + a * coordinates_x[i],
                            y_king + b * coordinates_y[i]));
      king.insert(make_pair(x_king + b * coordinates_x[i],
                            y_king + a * coordinates_y[i]));

      queen.insert(make_pair(x_queen + a * coordinates_x[i],
                             y_queen + b * coordinates_y[i]));
      queen.insert(make_pair(x_queen + b * coordinates_x[i],
                             y_queen + a * coordinates_y[i]));
    }
    
    
    int ans = 0;
    
    for (auto positions : king){
        if (queen.find(positions)!=queen.end()) ans++;
    }
    
    cout<<ans<<endl;
  }
}
