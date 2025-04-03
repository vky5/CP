#include <iostream>

using namespace std;

int main(){
    int n; cin>>n;

    int even = 0, odd = 0;
    for (int i = 0; i<n; i++){
        int tmp; cin>>tmp;

        if (tmp%2==0) even++;
        else odd++;
    }

    if (even==odd){
        cout<<even*2<<endl;
    }else if(even>odd) {
        int tmp = odd*2;
        cout<<tmp+1<<endl; 
        
        // even odd even odd even even even 
    }else{
        int tmp = even*2;
        odd-=even;

        if (odd%3==0){
            tmp+= (odd/3 * 2);
        }else if (odd%3==1){
            tmp += (((odd - 1)/3 )*2 -1);
        }else{
            tmp+= ((odd-2)/3 * 2 + 1);
        }

        cout<<tmp<<endl;

    }
    

}