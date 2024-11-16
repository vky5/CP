#include <iostream>

using namespace std;

int main(){
	int n, m; cin>>n>>m;
	int gcd = 1;
	for (int i=  1; i<= min(n, m); i++){
		if (n%i==0 && m%i==0){
			gcd = i;
		}
	}

	cout<<gcd<<endl;
	return 0;
}

