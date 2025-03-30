#include <iostream>
#include <vector>

using namespace std;


int main(){
    int t; cin>>t; while(t--){
        int n; cin>>n;

        vector<int> ls(n);

        for (int i = 0; i<n; i++){
            cin>>ls[i];

            if (ls[i]==1){
                ls[i]++;
            }
        }

        for (int i = 0; i+1<n; i++){
            if (ls[i+1]%ls[i]==0){
                ls[i+1]++;
            }
        }

        for (int i = 0; i<n;i++){
            cout<<ls[i]<<" ";
        }cout<<endl;
    }
}