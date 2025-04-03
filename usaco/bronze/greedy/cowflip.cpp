#include <iostream>

using namespace std;

int main(){
    freopen("cowtip.in", "r", stdin);
    freopen("cowtip.out", "w", stdout);
    int n; cin>>n;

    char grid[n][n];

    for (int i= 0; i<n; i++){
        for (int j= 0; j<n; j++){
            cin>>grid[i][j];
        }

    }

    int count = 0;

    for (int i = n-1; i>=0; i--){
        for (int j = n-1; j>=0; j--){
            if (grid[i][j]=='1'){
                count++;
                for (int p = 0; p<=i; p++){
                    for (int q = 0; q<=j; q++ ){
                        if (grid[p][q]=='0'){
                            grid[p][q] = '1';
                        }else{
                            grid[p][q] = '0';
                        }
                    }
                }

            }
        }
    }

    cout<<count<<endl;

}