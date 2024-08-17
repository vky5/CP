/*
USACO 2015
Problem 3 Breed Counting
https://usaco.org/index.php?page=viewproblem2&cpid=572
date: 17/August/2024
time: 3 56 - 4 05
solved in less than 10 mins Hurray
Stucked in statc_range_sum for 1 hour becuase of not using long long
*/

#include <bits/stdc++.h>

using namespace std; 

int main(){
    freopen("bcount.in", "r", stdin);
	freopen("bcount.out", "w", stdout);
    int n, q; cin>>n>>q;

    vector<int> a(n+1);
    vector<int> b(n+1);
    vector<int> c(n+1);

    for (int i = 1; i<n+1; i++){
        int tmp; cin>>tmp;

        if (tmp==1){
            a[i]=a[i-1]+1;
            b[i]=b[i-1]+0;
            c[i]=c[i-1]+0;
        }else if (tmp==2){
            a[i]=a[i-1]+0;
            b[i]=b[i-1]+1;
            c[i]=c[i-1]+0;
        }else{
            a[i]=a[i-1]+0;
            b[i]=b[i-1]+0;
            c[i]=c[i-1]+1;
        }
    }

    while (q--)
    {
        int l, r; cin>>l>>r;
        cout<<a[r]-a[l-1]<<" "<<b[r]-b[l-1]<<" "<<c[r]-c[l-1]<<endl;
    }
    

    return 0;
}