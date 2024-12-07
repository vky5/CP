#include <iostream>
#include <vector>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("lifeguards.in", "r", stdin);
    freopen("lifeguards.out", "w", stdout);
    
    int n; 
    cin >> n;
    vector<pair<int, int>> ls(n);

    for (int i = 0; i < n; i++){
        cin >> ls[i].first >> ls[i].second;
    }

    sort(ls.begin(), ls.end());

    int ans = 0;
    for (int j = 0; j < n; j++){
        vector<pair<int, int>> tmp = ls;
        tmp.erase(tmp.begin() + j);  // Remove the j-th lifeguard

        int total_time = 0;
        int start = tmp[0].first;
        int end = tmp[0].second;

        // Merge the intervals and calculate total coverage
        for (int i = 1; i < tmp.size(); i++) {
            if (tmp[i].first <= end) {  // Overlapping or touching intervals
                end = max(end, tmp[i].second);
            } else {  // Non-overlapping interval
                total_time += (end - start);
                start = tmp[i].first;
                end = tmp[i].second;
            }
        }

        // Add the last interval
        total_time += (end - start);
        
        ans = max(ans, total_time);
    }

    cout << ans << endl;
}



/*
we are removing a life guard and then calculating the total time it would take  after removing that life guard
in this approach,

imagine each interval to have a start and end best will be to simulate some test cases

but the another approach is more important

create an array of 1000 or total life guards and +1 for each interval in time in which life guard will be there

then subtract for the time which we are firing one by one. 

then calculate the total amount of time that is not 0
*/