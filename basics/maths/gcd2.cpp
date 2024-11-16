#include <iostream>

using namespace std;

int main(){
	int n, m; cin>>n>>m;

	for (int i = min(n, m); i>=1; i--){
		if (n%i==0 && m%i==0){
			cout<<i<<endl;
			return 0;
		}
	}

	return 0;
}
