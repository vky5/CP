/*
Problem: https://cses.fi/problemset/task/1622
date: 06/01/2025
Attempts: 
time started: 5:00 PM
*/

#include <bits/stdc++.h>
#include <utility>

using namespace std;

void generatePermutations(set<string> &permut, string &st, int ln, int index=0){
    if (index==ln){
        cout<<st<<endl;
        permut.insert(st);
        return;
    }
    
    for (int i = index; i<ln; i++){
        swap(st[i], st[index]);
        generatePermutations(permut, st, ln, index+1);
        swap(st[i], st[index]); // backtracking from the previous swap
    }   
}

int main(){
    string st; cin>>st;
    
    set<string> s;
    
    generatePermutations(s, st, (int)st.size());
    
    cout<<(int)s.size()<<endl;
    for (auto x : s){
        cout<<x<<endl;
    }
}