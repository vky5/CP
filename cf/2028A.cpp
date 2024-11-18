#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;

        string path; cin>>path;
        bool found = false;

        int in_x = 0, in_y = 0;
        for (int i = 0; i<100*n && !found;  i++){
            if (path[i%n]=='N'){
                in_y++;
            }else if (path[i%n]=='S'){
                in_y--;
            }else if (path[i%n]=='E'){
                in_x++;
            }else if (path[i%n]=='W'){
                in_x--;
            }

            if (in_x==a && in_y==b){
                found = true;
            }
        }

        if (found){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}