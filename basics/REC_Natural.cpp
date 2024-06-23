// this is to print the sum of N natural numbers using recursion..
/*

sum(10)
10 + sum (9)

*/


#include <iostream>

using namespace std;

int sum(int a){
    if (a==1) return 1;
    
    return a + sum(a-1);
}

int main(){
    int n; cin>>n; cout<<sum(n)<<endl;
    cout<<n*(n-1)/2<<endl;
}
