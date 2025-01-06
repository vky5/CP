/*
question is from the basic of the books of usaco
*/

#include <bits/stdc++.h>

using namespace std;

int n; 
vector<int> ls;

/*
To generate the function we have to include or not include (2 condition)
for all the elements in the array
*/

void generateSubets(int index, vector<int> track){
    if (index==n){
        cout<<"subsets : ";
        for (auto x: track){
            cout<<x<<" ";
        }
        cout<<endl;

        return;
    }

    track.push_back(ls[index]);
    generateSubets(index+1, track);

    track.pop_back();
    generateSubets(index+1, track);
}

int main(){
    cin>>n; 

    for (int i = 0; i<n; i++){
        int tmp; cin>>tmp;
        ls.push_back(tmp);
    }
    vector<int> arr;
    generateSubets(0, arr);

    return 0;


}