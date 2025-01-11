/*
Link: http://www.usaco.org/index.php?page=viewproblem2&cpid=964
Problem Started: 11/01/2025 at 04:16PM
Problem ended
*/

#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main(){
    freopen("whereami.in", "r", stdin);
    freopen("whereami.out", "w", stdout);

    int n;
    cin >> n;
    string s;
    cin >> s;

    unordered_map<string, int> m;

    // Store frequencies of all substrings of different lengths
    for (int i = 1; i <= n; i++) { 
        
        bool sol_found = true;
        for (int j = 0; j <= n - i; j++) {
            m[s.substr(j, i)]++;
            
            if (m[s.substr(j, i)]>1) sol_found = false;
        }
        
        if (sol_found) {
			cout << i << endl;
			break;
		}   
    }
}
