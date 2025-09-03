#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> ls(n);
        bool cheat = true;

        for (int i = 0; i < n; i++){
            cin >> ls[i];
            if (ls[i]==0){
                cheat = false;
            }
        }

        bool nextOne = false;

        for (int i = 0; i +1< n  && !cheat; i++){
            if (ls[i]==0 && ls[i+1]==0){
                cheat = true;
                break;
            }
        }

        if (cheat)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}