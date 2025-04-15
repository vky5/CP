#include <iostream>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> ls(n);
        map<int, int> freq;
        
        pair<int, int> mst = {-1, -1};

        for (int i = 0; i<n; i++ ) {
            cin>>ls[i];
            freq[ls[i]]++;
        }

        for (auto x: freq){
            if (mst.second<x.second){
                mst.first = x.first;
                mst.second = x.second;
            }
        }

        // now calculating logarihmic growth before that 
        int rem = n - mst.second; // remianing number to be converted
        int count = 0;
        
        // cout<<rem<<endl;
        int q = mst.second;
        // cout<<q<<endl;
        while(rem - q>0){
            count++;
            count+=(q);
            rem-=q;
            q*=2;
        }

        if (rem!=0){
            count++;
            count+=(rem);
        }

        cout<<count<<endl;



    }
}