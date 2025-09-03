#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

ll upper_limit(const vector<ll> &tmp, ll n, ll tar){
    ll beg = 0, end = n;

    while(beg<end){
        ll mid = beg + (end - beg)/2;

        if (tmp[mid]<=tar){
            beg = mid+1; // hme upper most limit chaiye, equal ko iinclude nhi krna
        }else{
            end = mid;
        }
    }

    return beg;
}

int main(){
    ll n, k; cin>>n;
    vector<ll> ls(n);
    for (ll i = 0; i<n; i++) cin>>ls[i];
    sort(ls.begin(), ls.end());
    cin>>k;
    while(k--){
        ll l, r; cin>>l>>r;

        cout<<upper_limit(ls, n, r) - upper_limit(ls, n, l-1) << " ";
    }
}   



int binarySearch(vector<int>& arr, int target) {
    int beg = 0, end = arr.size() - 1;
    while (beg <= end) {
        
        int mid = (beg + end) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            beg = mid + 1;
        else
            end = mid - 1;
    }
    return -1; // not found
}
