#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n, k; cin>>n>>k;

        vector<int> ls(n+1);
        ls[0] = 0;

        for (int i = 0; i<n; i++){
            int tmp; cin>>tmp;
            ls[i+1] = tmp + ls[i];

        }

        while(k--){
            int a, b, c; cin>>a>>b>>c;

            int diff = (ls[b] - ls[a-1]); // this is the sum of the sequence that to be subtracted
            int lenToBeReplaced = (b - a + 1);

            if ((ls[n] - diff + lenToBeReplaced*c)%2!=0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }


}