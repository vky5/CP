#include <bits/stdc++.h>
#include <cstdio>
#include <iostream>

using namespace std;


int main(){
    freopen("tttt.in", "r", stdin);
    freopen("tttt.out", "w", stdout);
    char a[3][3];
    
    map<char, int> single_win;
    map<set<char>, int> double_win; 
    
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            cin>>a[i][j];
        }
    }
    
    int count[2]= {0, 0};
    // checking for the rows 
    for (int i = 0; i<3; i++){
        set<char> tmp;
        for (int j = 0; j<3; j++){
            tmp.insert(a[i][j]);
        }
        
        
        if (tmp.size()==1) {
            single_win[*tmp.begin()] = 1; 
        }
        else if (tmp.size()==2) {
            double_win[tmp] = 1;
        }
    }
    
    
    // for checking the columns
    for (int i = 0; i<3; i++){
        set<char> tmp;
        for (int j = 0; j<3; j++){
            tmp.insert(a[j][i]);
        }
        
        
        if (tmp.size()==1) {
            single_win[*tmp.begin()] = 1; 
        }
        else if (tmp.size()==2) {
            double_win[tmp] = 1;
        }
    }
    
    // for checking the diagonals
    for (int i = 0; i<1; i++){
        set<char> tmp;
        tmp.insert(a[0][0]);
        tmp.insert(a[1][1]);
        tmp.insert(a[2][2]);
        
        
        if (tmp.size()==1) {
            single_win[*tmp.begin()] = 1; 
        }
        else if (tmp.size()==2) {
            double_win[tmp] = 1;
        }
    }
    
    // for checking the diagonals from the other side;
    for (int i = 0; i<1; i++){
        set<char> tmp;
        
        tmp.insert(a[0][2]);
        tmp.insert(a[1][1]);
        tmp.insert(a[2][0]);
        
        if (tmp.size()==1) {
            single_win[*tmp.begin()] = 1; 
        }
        else if (tmp.size()==2) {
            double_win[tmp] = 1;
        }
    }
    
    for (auto x: single_win) count[0]+=x.second;
    for(auto x: double_win) count[1]+=x.second;
    
    cout<<count[0]<<endl<<count[1]<<endl;

    return 0;
}