#include <iostream>

using namespace std;

int main(){
    int t; cin>>t; 
    while (t--) {
        int n; cin>>n;
        string s; cin>>s;
        int count = 0;
        bool countinous = false;
        
        for (int i = 0; i+2<n; i++){
            if (s[i]=='.' && s[i+1]=='.' && s[i+2]=='.'){
                
                countinous = true;
                break;
            }else if (s[i]=='.'){
                count++;
            }
        }
        
        if (!countinous){
            if (s[n-1]=='.') count++;
            if (s[n-2]=='.') count++;
            
            cout<<count<<endl;
        }else{
            cout<<2<<endl;
        }
    }
    
    return 0;
}