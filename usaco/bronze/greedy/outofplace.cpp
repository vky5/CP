#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n; cin>>n;
    vector<int> ls(n);

    for (int i = 0; i<n; i++) cin>>ls[i];
    int count = 0;

    // first we find the position of cow at wrong place
    int ps = -1;
    int dir = 0;
    if (ls[0]>ls[1]){
        ps = 0;
        dir = 1;
    }else if (ls[n-1]<ls[n-2]){ // this means last one is at wrong position
        ps = n-1;
        dir = -1;
    }


    for (int i = 1; i+1<n && dir == 0; i++){
        if (ls[i-1]>ls[i] || ls[i]>ls[i+1]){
            ps = i;
            if (ls[i-1]>ls[i]){
                dir = -1;
            }else{
                dir = 1;
            }
            break;
        }
    }

    cout<<ps<<endl;
    
    if (dir == -1){
            
    }



}