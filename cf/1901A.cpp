#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, x; cin>>n>>x;

        vector<int> ls(n+1);
        ls[0] = 0;
        for (int i = 1; i<=n; i++){
            cin>>ls[i];
        }

        int fuel = 0;

        for (int i = 0; i+1<=n; i++){
            fuel = max(ls[i+1] - ls[i], fuel);
        }

        fuel = max(2*(x - ls[n]), fuel);

        cout<<fuel<<endl;
    }
}
