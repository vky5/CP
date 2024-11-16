#include <iostream>

using namespace std;

int main(){
	int n; cin>>n;

	int tmp = n;
	int reversed_num = 0;

	while(tmp){
		reversed_num=((tmp%10) + reversed_num * 10);
		tmp/=10;
	}

	cout<<reversed_num<<endl;
	return 0;
}
