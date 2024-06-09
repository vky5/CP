/* 
link: https://cses.fi/problemset/task/1621
date: 10-06-24
desc: maths exam on 11 ;)
solved in: 2 min
number of attempts: 1
*/

#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main(){
    int n; 
    cin>>n;

    set<int> ls;


    
    for (int i = 0; i<n; i++) {
        int t; cin>>t; 
        ls.insert(t);
    }

    cout<<ls.size()<<endl;
    

    return 0;
}