/*
Problem started: 9: 35 AM
Problem solved: 9:43 AM (8 mins)
Date: 07/01/2025/
desc: basic sorting question in which if the incoming time of next cow is less then update it with the new time and if it is more then the cow can be processed as their incoming time + time required
No. of attempts: 1
link: https://usaco.org/index.php?page=viewproblem2&cpid=713
*/

#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main(){
    freopen("cowqueue.in", "r", stdin);
    freopen("cowqueue.out", "w", stdout);
    int n; cin>>n;
    vector<pair<int, int>> ls(n);
    
    for (int i = 0; i<n; i++){
        cin>>ls[i].first>>ls[i].second;
    }
    
    sort(ls.begin(), ls.end());
    
    int tmp = 0;
    for (int i = 0; i<n; i++){
        if (tmp>ls[i].first){
            ls[i].first = tmp;
        }
        tmp = ls[i].first + ls[i].second;
    }
    
    cout<<tmp<<endl;
    
    return 0;
}