#include <iostream>
#include <vector>

using namespace std;

int main(){
	int n; cin>>n;
	vector<int> ls;

	for (int i = 1; i<=n; i++){
		if (n%i==0){
			ls.push_back(i);
		}
	}

	for (auto x: ls){
		cout<<x<<" ";
	}
	cout<<endl;

	return 0;
}
