#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, q; cin>>n>>q;
    vector<int> ls(n+1);
    ls[0] = 0;
    for (int i = 0; i<n; i++){
        int tmp; cin>>tmp; 
        ls[i+1] = tmp+ls[i];
    }
    
    while(q--){
        int first, last; cin>>first>>last;
        cout<<ls[last] - ls[first-1]<<endl;
    }
}

/*
simple 1d implementation of prefix sum
*/