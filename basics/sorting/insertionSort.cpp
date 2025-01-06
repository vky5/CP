#include <bits/stdc++.h>
#include <vector>

using namespace std;

vector<int> insertionSort(int ln, vector<int> &arr) {
  // Step 1: Assume that the first element is sorted and start with index 1, not
  // 0
  for (int i = 1; i < ln; i++) {
    int key = arr[i]; // The element to insert
    int j = i - 1;

    // Step 2: Shift elements of arr[0..i-1], that are greater than key, to one
    // position ahead
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j--;
    }

    // Step 3: Insert the key at the correct position
    arr[j + 1] = key;
  }

  return arr;
}

int main() {
  int n;
  cin >> n;

  vector<int> ls(n);

  for (int i = 0; i < n; i++)
    cin >> ls[i];

  insertionSort(n, ls);

  for (int x : ls) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}