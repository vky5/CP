#include <iostream>
#include <string>

using namespace std;

int main() {
    int t; 
    cin >> t; 
    while (t--) {
        int n; 
        string s;
        cin>>n>> s;
        // int n = s.size();

        int flips1 = 0, flips2 = 0;

        char first1 = 'B', first2 = 'W';

        for (int i = 0; i < n; i++) {
            if (s[i] != first1) flips1++;
            if (s[i] != first2) flips2++;
            first1 = (first1 == 'B') ? 'W' : 'B';
            first2 = (first2 == 'B') ? 'W' : 'B';
        }

        cout << min(flips1, flips2) << endl;
    }
}
