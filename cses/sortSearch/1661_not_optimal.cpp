/* 
link: https://cses.fi/problemset/task/1661
date: 02/09/2024
desc: Tomorrow is SIH internal hackathon and I need to prepare ppt but here I am again always on worst time
*/

// this is the brute force 

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, x; cin>>n>>x; 

    int arr[n+1];

    for (int i = 1; i<n+1; i++){
        int tmp; cin>>tmp;
        arr[i] = tmp + arr[i-1];
    }

    int counter = 0;

    for (int i = 0; i<n+1; i++){
        for (int j = i+1; j<n+1; j++){
            if (x==(arr[j]-arr[i])){
                counter++;
            }
        }
    }

    cout<<counter<<endl;
    return 0;
}