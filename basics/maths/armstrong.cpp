#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int n; cin>>n;
	int counter = 0;
	int ans = 0;
	int tmp = n;

	while(tmp){
		tmp/=10;

		counter++;

	}

	tmp = n;

	while(tmp){
		ans +=pow( (tmp%10), counter);
		tmp/=10;

	}

	if (ans ==n){
		cout<<"true"<<endl;
	}else{
		cout<<"false"<<endl;
	}

	return 0;
}

