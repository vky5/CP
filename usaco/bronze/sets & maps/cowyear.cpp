#include <bits/stdc++.h>
#include <string>
#include <vector>

using namespace std;

int main(){
    int n; cin>>n;
    map<string, int> years = {
        {"Ox", 1},
        {"Tiger", 2},
        {"Rabbit", 3},
        {"Dragon", 4},
        {"Snake", 5},
        {"Horse", 6},
        {"Goat", 7},
        {"Monkey", 8},
        {"Rooster", 9},
        {"Dog", 10},
        {"Pig", 11},
        {"Rat", 12}
    };

    map<string, vector<string>> m;
    for (int i = 0; i<n; i++){
        string tmp[8];
        
        for (int j = 0; j<8; j++) cin>>tmp[j];
        
        m[tmp[0]] = {tmp[7], tmp[3], tmp[4]}; // storing {next cow, previous or next, year}
    }
    
    string last_to_look = "Elsie";
    int ans = 0;
    
    for (int i = 0; i<n; i++){
        if (m[last_to_look][1]=="previous"){
            ans-=(13 - years[m[last_to_look][2]]);
        }else{
            ans+=(years[m[last_to_look][2]]);
        }
        
        last_to_look= m[last_to_look][0];
        
        if (last_to_look=="Bessie"){
            cout<<abs(ans+1)<<endl;
            return 0;
        }
    }
}