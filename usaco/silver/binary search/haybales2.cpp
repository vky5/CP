#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int atMostPosition(int target, vector<int> tmp, int n){ // acts like upper bound
    int beg =0;
    int end = n;
    
    
    while(beg<end){
        int mid = (beg + end)/2;
        if (tmp[mid]<=target){ // mid is just small then the current 
            beg = mid+1; // it means mid + 1 should be checked because mid is not fit for target checking
        }else{
            end = mid; // if mid is excluded it comes here which means this mid is tmp[mid]>target in that case, we can start checking from this mid only mid + 1 will be greater than this mid but we will be skipping this mid in taht case
        }
    }

    return beg; // this is the first number that is greater than target 
}

int main(){
    int n,q; cin>>n>>q;

    vector<int> ls(n); 
    for (int i = 0; i<n; i++) cin>>ls[i];

    sort(ls.begin(), ls.end());

    while (q--){
        int a, b; cin>>a>>b;
        
        cout<<atMostPosition(b, ls, n) - atMostPosition(a - 1, ls, n)<<endl;
    }   
    
}