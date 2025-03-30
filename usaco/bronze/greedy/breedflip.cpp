#include <iostream>

using namespace std;

int main(){
    freopen("breedflip.in", "r", stdin);
    freopen("breedflip.out", "w", stdout);
    int n; cin>>n;
    string a, b; cin>>a>>b;
    
    int count = 0;
    bool countStart = false;
    for (int i = 0; i<n; i++){
        if (a[i]!=b[i] && !countStart){
            count++;
            countStart = true;
        }else if (a[i]==b[i] && countStart){
            countStart = false;
        }
    }

    cout<<count<<endl;
}