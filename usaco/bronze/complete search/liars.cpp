/*
https://usaco.org/index.php?page=viewproblem2&cpid=1228
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> left, right;

    for (int i = 0; i < n; i++)
    {
        char tmp;
        cin >> tmp;
        if (tmp == 'G')
        {
            int tmp2;
            cin >> tmp2;
            right.push_back(tmp2);
        }
        else
        {
            int tmp2;
            cin >> tmp2;
            left.push_back(tmp2);
        }
    }

    int ans = INT_MAX;

    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    // this is for first searching for cow at the position of left side.
    for (int i = 0; i < left.size(); i++)
    {
        int tmp = i; // it is the counter of how many are wrong and in the left case since any number greater than it is obviosuly going to make the cow correct
        for (int j = 0; j < right.size(); j++)
        {

            // cout<<left[i]<<" "<<right[j]<<endl;
            if (left[i] < right[j])
            {
                tmp++;
            }
        }

        // cout<<tmp<<endl;

        ans = min(ans, tmp);
    }

    for (int i = 0; i < right.size(); i++)
    {

        int tmp = right.size() - i - 1; // but not for here
        for (int j = 0; j < left.size(); j++)
        {
            if (left[j] < right[i])
            {
                tmp++;
            }
        }
        // cout<<tmp<<endl;

        ans = min(ans, tmp);
    }

    cout << ans << endl;

    return 0;
}