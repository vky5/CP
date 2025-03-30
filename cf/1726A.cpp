#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> ls(n);

        for (int i = 0; i < n; i++)
            cin >> ls[i];

        int lowerst = INT_MAX;
        int largetst = 0;

        for (int i = 0; i < n; i++){
            lowerst = min(ls[i], lowerst);
            largetst = max(largetst, ls[i]);
        }

        int ans = max(max(ls[n - 1] - lowerst, largetst - ls[0]), ls[n - 1] - ls[0]);

        // but this answer is only valid if the entire number can not be taken together to give the result
        for (int i = 0; i + 1 < n; i++){
            ans = max(ls[i] - ls[i+1], ans); // earlier I did abs(ls[i+1]-ls[i]) but I need to remember that the smallest number is gonna be ahead of largest number which then goes to the beginning
            // 11 154 8 10 
            // here 154 is going to be in then end ls[i] and 8 that is ls[i+1] is going to be in the beginning for when in the sequence i = 1 (ls[i] = 154)
        }

        cout << ans << endl;
    }
}