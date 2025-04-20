#include <iostream>

using namespace std;

int main(){
    int n, m;cin>>n>>m; // n is rows and m is columns
    int q; cin>>q;
    
    int ls[n+1][m+1];
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            ls[i][j] = 0;
        }
    }

    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=m; j++){
            int tmp; cin>>tmp;
            ls[i][j] = tmp + ls[i-1][j] + ls[i][j-1] - ls[i-1][j-1];
            
            // the ls[i-1][j-1] was added twice when we added the numbers
        }
    }
    
    while(q--){
        int first_row, first_col, A, B; cin>>first_row>>first_col>>A>>B;
        int result = ls[A][B] 
               - ls[first_row - 1][B]
               - ls[A][first_col - 1]
               + ls[first_row - 1][first_col - 1];
        
        cout<<result<<endl;
    }
    
}

/*
1 2 3
4 5 6
7 8 9


prefix sum
0  0  0  0
0  1  3  6
0  5 12 21
0 12 27 45


*/
