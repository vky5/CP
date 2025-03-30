#include <iostream>

using namespace std;

int main(){
    int t; cin>>t;

    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int count = 0;
        int lcl = 1;
        for (int i = 0; i+1<n; i++){
            if (s[i+1]==s[i]){
                lcl++;
            }else{
                count = max(lcl, count);
                lcl = 1;
            }
        }
        
        count = max(lcl, count);

        cout<<count+1<<endl;
    }
}
