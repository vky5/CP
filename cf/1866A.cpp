#include <climits>
#include <iostream>
// #include <vector>

using namespace std;

int main(){
    int n; cin>>n;

    // vector<int> ls(n);
    int min_num = INT_MAX;
    for (int i = 0; i<n; i++) {
        int tmp; cin>>tmp;
        min_num = min(abs(tmp), min_num);
    }

    cout<<min_num<<endl;

}
