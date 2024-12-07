#include <iostream>

using namespace std;

int main(){
	int n; cin>>n;
	if (n==1 || n==0){
		cout<<"NO"<<endl;
	}

	bool isPrime = true;

	for (int i = 2; i<n && isPrime; i++){
		if (n%i==0){
			isPrime = false;
			break;
		}
	}

	if (isPrime){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}

	return 0;
}
