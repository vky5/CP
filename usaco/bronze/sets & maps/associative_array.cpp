/*
Question so easy doesnt need any time limit
https://judge.yosupo.jp/problem/associative_array
*/

#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;
using ll = long long int;

int main(){
    int t; cin>>t;
    
    unordered_map<int, int> m;
    while (t--) {
        int a, b, x;
        cin>>a;
        
        if (a==0){
            cin>>b>>x;
            m[b] = x;
        }
        else{
            cin>>b;
            cout<<m[b]<<endl;
        }
    }
    
    return 0;
}