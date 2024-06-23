// using recursion to calculate the power of a number


#include <iostream>

using namespace std;

int pow(int n,int a){
    if (a<=1){
        return n;
    }

    return n * pow(n, a-1);
}


int main(){
    int n, a; cin>>n>>a; 
    cout<<pow(n,  a)<<endl;
}