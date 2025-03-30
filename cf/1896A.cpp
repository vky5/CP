#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin>>t;
    
    while(t--){
        int n; cin>>n;
        
        vector<int> ls(n);
        
        for (int i = 0; i<n; i++) cin>>ls[i];
        
        if (ls[0]==1){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    
    return 0;
}