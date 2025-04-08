#include <iostream>

using namespace std;

int main(){
    int t; cin>>t; 
    
    while(t--){
        int n, k; cin>>n>>k;
        bool result = false;
        for (int i = 0; i<n ; i++){
            int tmp; cin>>tmp;
            
            if (tmp==k){
                result = true;
            }
        }
        
        if (result){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
