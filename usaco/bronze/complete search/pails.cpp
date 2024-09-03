#include <bits/stdc++.h>

using namespace std;

int main(){
    freopen("pails.in", "r", stdin);
	freopen("pails.out", "w", stdout);
    int x, y, m; cin>>x>>y>>m;

    int max_x = m / x;
    int max_y = m / y;

    int sol = 0;
    for (int i = 0; i<=max_x; i++){
        for (int j = 0; j<=max_y; j++){
            int tmp =  x*i + y*j;
            if (m>=tmp){
                sol = max(sol, tmp);
            }
        }
    }

    cout<<sol<<endl;
}