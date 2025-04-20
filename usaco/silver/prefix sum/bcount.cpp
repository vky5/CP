#include <iostream>
#include <vector>


using namespace std;

int main(){
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    int n, q; cin>>n>>q;
    vector<int> a(n+1), b(n+1), c(n+1);
    a[0] = b[0] = c[0] = 0;
    for (int i = 0; i<n; i++){
        int tmp; cin>>tmp;

        if (tmp==1){
            a[i+1] += (a[i]+1);
            b[i+1] += b[i];
            c[i+1] += c[i];
        }else if (tmp==2){
            a[i+1] += a[i];
            b[i+1] += (b[i]+1);
            c[i+1] += c[i];
        }else{
            a[i+1] += a[i];
            b[i+1] += b[i];
            c[i+1] += (c[i]+1);
        }
    }
    
    // for (auto x: a) cout<<x<<" "; cout<<endl;

    while(q--){
        int x, y; cin>>x>>y;
        cout<<a[y] - a[x-1]<<" "<<b[y] - b[x-1]<<" "<<c[y] - c[x-1]<<endl;
    }


}
