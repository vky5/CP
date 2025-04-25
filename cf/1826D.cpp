// #include <iostream>
// #include <vector>

// using namespace std;

// int main() {
//   int t;
//   cin >> t;
//   while (t--) {
//     int n;
//     cin >> n;
//     vector<int> beautified(n + 1);
//     pair<int, int> b1 = {0, 0}, b2 = {0, 0}, b3 = {0, 0};
//     vector<int> ls(n);
//     for (int i = 0; i < n; i++) {
//       cin >> ls[i];
//     }

//     b1 = {ls[0], 0}, b2 = {ls[1], 1}, b3 = {ls[2], 2};

//     // manually genearting prefix sums for first few numbers
//     beautified[1] = b1.first;
//     beautified[2] = b2.first + beautified[1];
//     beautified[3] = b3.first + beautified[2];

//     vector<pair<int, int>> smol;
//     for (int i = 4; i <= n; i++) {
//       int target = ls[i - 1];
//       pair<int, int> tmp;
      
//       int min_amoung_beauties = min(b1.first, min(b2.first, b3.first));
      
//       tmp.first = min(min_amoung_beauties, target);
      
      
//       if (min_amoung_beauties == tmp.first) {
      
//           if (tmp.first == b1.first) {
//           tmp.second = b1.second;
//           b1.first = target;
//           b1.second = i - 1;
//         } else if (tmp.first == b2.first) {
//           tmp.second = b2.second;
//           b2.first = target;
//           b2.second = i - 1;
//         } else {
//           tmp.second = b3.second;
//           b3.first = target;
//           b3.second = i - 1;
//         }

//       } else {
//         tmp.first = target;
//         tmp.second = i - 1;
//       }
      
//       smol.push_back(tmp);
//       beautified[i]  = b1.first  + b2.first + b3.first;
//     }
    
    
//     cout<<" ---------------- beautified array start -----------------"<<endl;
//     for (auto x: beautified){
//         cout<<x<<" ";
//     }cout<<endl;
    
//     cout<<" ---------------- values of different beauty in the end start -----------------"<<endl;
//     cout<<b1.first<<" "<<b1.second<<endl;
//     cout<<b2.first<<" "<<b2.second<<endl;
//     cout<<b3.first<<" "<<b3.second<<endl;
//     cout<<" ---------------- smol array start -----------------"<<endl;
//     for (auto x: smol){
//         cout<<x.first<<" "<<x.second<<endl;
//     }
    
//     cout<<"-------- actual solution start ---------"<<endl;
    
//     // following brute force approach
//     for (int i = 1; i<=n; i++){
//         for (int j = i + 3; j<=n; j++){
//             // 1. find 
//         }
//     }
    
//   }
// }
// 
// cant be solved using this, because it need sto be solved in O(n) and my solution was going 0(n3)
