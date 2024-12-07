#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	int n; cin>>n;

	vector<int> ls;

	for (int i = 1; i<=sqrt(n); i++){
		if (n%i==0){
			ls.push_back(i);

			if (i!=n/i){
				ls.push_back(n/i);
			}
		}
	}
	
	for (auto x: ls){
		cout<<x<<" ";
	}
	cout<<endl;

	return 0;
}
