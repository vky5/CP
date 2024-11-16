#include <iostream>

using namespace std;

int gcd(int a, int b){
	if (a==0 || b==0){
		return max(a, b);
	}

	return gcd(min(a, b), max(a, b) - min(a, b));
}

int main(){
	int n, m;
	cin>>n>>m;
	cout<<gcd(n, m)<<endl;
	return 0;
}

