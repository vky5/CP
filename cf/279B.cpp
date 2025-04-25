#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    vector<int> ls(n);
    for (int i = 0; i < n; i++) cin >> ls[i];

    int left = 0, sum = 0, ans = 0;

    for (int right = 0; right < n; right++) {
        sum += ls[right];
        
        // Shrink window if sum exceeds k
        while (sum > k) {
            sum -= ls[left];
            left++;
        }

        // Update max length of valid subarray
        ans = max(ans, right - left + 1);
    }

    cout << ans << endl;
}
