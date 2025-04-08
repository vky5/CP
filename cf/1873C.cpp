#include <iostream>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        
        int sum = 0;
        for (int i= 0; i<10; i++){
            for (int j = 0; j<10; j++){

                char tmp; cin>>tmp;
                if (tmp=='.') continue;
                
                int x = i+1, y = j+1;
                
                if (x>5){
                    x = 11 - x;
                }
                if (y>5){
                    y = 11 - y;
                }
                
                sum+=min(x, y);
            }
        }
        
        cout<<sum<<endl;
        
        
    }
}
