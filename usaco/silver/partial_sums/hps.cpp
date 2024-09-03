/*
https://usaco.org/index.php?page=viewproblem2&cpid=691
Usaco 2017 Hoof paper scissor, Silver
started in: long time ago
ended in: I had to take help for this one. the solution was intitution but I didnt understand at first why it worked. 
desc: this question took a long time I will add a detail explanation once I completely solve it.
*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long int;

int main()
{
    freopen("hps.in", "r", stdin);
    freopen("hps.out", "w", stdout);
    ll n;
    cin >> n;

    vector<ll> hoof(n + 1), paper(n + 1), scissor(n + 1);

    for (ll i = 1; i <= n; i++)
    {
        char tmp;
        cin >> tmp;

        hoof[i] = hoof[i - 1];
        paper[i] = paper[i - 1];
        scissor[i] = scissor[i - 1];

        if (tmp == 'S')
        {
            hoof[i]++;
        }
        else if (tmp == 'P')
        {
            scissor[i]++;
        }
        else if (tmp == 'H')
        {
            paper[i]++;
        }
    }

    // Now form two group from 0 to x and x to n to calculate the max wins she can get

    ll count = 0;

    for (ll i = 1; i < n + 1; i++)
    {

        /*
        in this solution first we calculate the number of gestures made by farmer at each stage

        R-> S = [0, 0, 0, 0, 1]
        p-> R = [0, 0, 1, 1, 1]
        S-> P = [1, 2, 2, 3, 3]

        now we are going to divide this matrix into two part (i is doing same thing here)

        the left side is the default gesture of bessie (so the max win here will be the max amount of the gesure that farmer john made)
        and in right side, the max win will be the max win that other side will be created

        since we are traversing the array completely and checking every possibility, we would have checked all the condition for the same.
        
        */
        ll left_side_win = max(hoof[i], max(scissor[i], paper[i]));

        ll right_side_win = max(hoof[n] - hoof[i], max(paper[n] - paper[i], scissor[n] - scissor[i]));

        count = max(count, left_side_win + right_side_win);
    }

    cout << count << endl;
}