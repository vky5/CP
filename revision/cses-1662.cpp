
#include <iostream>
#include <map>
#include <vector>

using namespace std;
int main() {
  int n;
  cin >> n;
  vector<int> ls(n);
  map<int, int> record;
  int tmp;
  
  for (int i = 0; i < n; i++) {
    cin >> tmp; 
    ls[i+1] = tmp+=ls[i];
    record[ls[i]]++;
  }
  
for (int i = 0; i<n; i++){
    record[ls[i]--];
    
}
  
  
}
