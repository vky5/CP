#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    // freopen("haybales.in", "r", stdin);
    // freopen("haybales.out", "w", stdout);

    int n, q; cin>>n>>q;
    vector<int> ls(n);
    for (int i = 0; i<n; i++) cin>>ls[i];
    sort(ls.begin(), ls.end());



    while (q--){
        int a, b; cin>>a>>b;
        // cout<<lower_bound(ls.begin(), ls.end(), b) - lower_bound(ls.begin(), ls.end(), a)+1<<endl; // wont work because lower bound will give greater number than the target if target not found
        cout<<upper_bound(ls.begin(), ls.end(), b) - lower_bound(ls.begin(), ls.end(), a)+1<<endl;
    }
    
}