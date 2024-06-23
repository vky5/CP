// to print the factorial of a number  using recursion

#include <bits/stdc++.h>

using namespace std;

int factorial(int a){
    if (a<=1){
        return 1;
    }

    return a * factorial(a-1);
}


int main(){
    int n; cin>>n; 

    // call by value
    cout<<factorial(n)<<endl;
    // cout<<n<<endl;


    // call by reference
    // cout<<factorial2(&n)<<endl;
    // cout<<n<<endl;
}