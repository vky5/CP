/*
Link: https://usaco.org/index.php?page=viewproblem2&cpid=894
Date: 02/04/2025
Time Started: 8:40PM
Time Ended: 
Notes: Brief description or notes about the problem.
*/

#include <iostream>


using namespace std;

int main(){
    int n; cin>>n;

    int adj[n][n];

    for (int i = 0; i<n-1; i++){
        int a, b; cin>>a>>b;

        adj[a-1][b-1] = adj[b-1][a-1] = 1; // created an adjancet matrix
    }

    // now we need to find the continous sequences 

    


}