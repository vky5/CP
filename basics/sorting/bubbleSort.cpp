
#include <bits/stdc++.h>
#include <utility>

using namespace std;

vector<int> bubbleSort(int len, vector<int> &arr){
    for (int i = 0; i<len; i++){
        for (int j = 0; j<len-1; j++){ // in this we move the biggest elements to the end by constantly comparing them 
            if (arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    
    return arr;
}

int main(){
    int n; cin>>n;
    
    vector<int> ls(n);
    
    for (int i = 0; i<n;i++) cin>>ls[i];
    
    bubbleSort(n, ls);
    
    for (auto x: ls) cout<<x<<" ";
    cout<<endl;
}