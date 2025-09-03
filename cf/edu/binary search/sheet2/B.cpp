#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> ls(n);
    for (int i = 0; i < n; i++)
        cin >> ls[i];

    double beg = 1, end = INT_MAX;
    int mid;
    int count = 0;
    while (beg < end){
        mid = beg + (end - beg) / 2;
        int tmp = 0;
        for ( auto x: ls){
            tmp+=(x/mid);
        }

        if (tmp>count){
            
        }
    }

    cout << beg << endl;
}