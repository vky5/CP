// This is the code to print the fibonacci of a number and it is solved using recursion 


#include <iostream>

using namespace std;

int fibonacci(int n){
    if (n<2){
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
    cout<<"Enter the number till you want to find the fibonacci : ";
    int n; cin>>n; 

    cout<<fibonacci(n)<<endl;

}