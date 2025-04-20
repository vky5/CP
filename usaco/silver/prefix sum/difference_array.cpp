#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, k; cin>>n>>k;
    vector<int> ls(n);

    for (int i= 0; i<n; i++) cin>>ls[i]; // this is the array that is given to us before
    vector<int> tmp(n); // this is the range update that is gonna happen in the ls array
    while(k--){
        int l, r, x; cin>>l>>r>>x;
        tmp[l-1]+=x;
        tmp[r] -=x;
    }

    // creating final array
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum+=tmp[i];
        cout<<ls[i] + sum<<endl;
    }


}
