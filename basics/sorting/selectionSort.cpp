/*
In selection sort we sort the elements in the list by selecting the smallest
element from the array until nothing is remained and then put it in the end
of the new array that we are forming
*/

#include <bits/stdc++.h>
#include <climits>
#include <vector>

using namespace std;

vector<int> selectionSort(int ln, vector<int> &arr) {

  vector<int> ans;
  while (arr.size()) {
    int minNum = INT_MAX;
    int target = -1;
    for (int i = 0; i < (int)arr.size(); i++) {
        if (minNum>arr[i]){
            minNum = arr[i];
            target = i;
        }
    }
    
    arr.erase(arr.begin() + target);
    ans.push_back(minNum);
  }
  
  return ans;
}

int main() {
  int n;
  cin >> n;

  vector<int> ls(n);

  for (int i = 0; i < n; i++)
    cin >> ls[i];

  ls = selectionSort(n, ls);

  for (int x : ls) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}
