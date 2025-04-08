#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin>>t; 
    while(t--){
        int n; cin>>n;
        
        vector<int> ls(n-1);
        int sum = 0;
        for (int i = 0; i<n-1; i++) {
            int tmp; cin>>tmp;
            
            sum+=tmp;
        }
        
        cout<<(-sum)<<endl;
        
        
    }
}
