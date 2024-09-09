/*
https://usaco.org/index.php?page=viewproblem2&cpid=963
started in: 9: 16 PM solved in 10 mins with patience took time in coding
today is 09/09/24
today is day 2 of consistency
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("gymnastics.in", "r", stdin);
    freopen("gymnastics.out", "w", stdout);
    int k, n;
    cin >> k >> n;

    int ls[k][n];

    for (int i = 0; i < k; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ls[i][j];
        }
    }

    set<pair<int, int>> ans;

    // storing all the possible cases in the set
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ans.insert(make_pair(ls[0][i], ls[0][j]));
        }
    }

    for (int i = 1; i < k; i++)
    {
        set<pair<int, int>> updated_ans;
        for (int j = 0; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {

                if (ans.find(make_pair(ls[i][j], ls[i][k])) != ans.end())
                {
                    updated_ans.insert(make_pair(ls[i][j], ls[i][k]));
                }
            }
        }
        ans = updated_ans;
    }

    cout << ans.size() << endl;
}