/*
https://usaco.org/index.php?page=viewproblem2&cpid=736
USACO 2017 US Open Bronze
started date: 09/09/2024
started time: 10:32 PM
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
  freopen("cownomics.in", "r", stdin);
  freopen("cownomics.out", "w", stdout);
  int n, m;
  cin >> n >> m;

  vector<vector<char>> plain, spotty;

  for (int i = 0; i < n; i++)
  {
    vector<char> tmp;

    for (int i = 0; i < m; i++)
    {
      char temp;
      cin >> temp;
      tmp.push_back(temp);
    }

    plain.push_back(tmp);
  }

  for (int i = 0; i < n; i++)
  {
    vector<char> tmp;

    for (int i = 0; i < m; i++)
    {
      char temp;
      cin >> temp;
      tmp.push_back(temp);
    }

    spotty.push_back(tmp);
  }

  int counter = 0;

  for (int i = 0; i < m; i++)
  {
    vector<char> result;

    for (int j = 0; j < n; j++)
    {
      for (int k = 0; k < n; k++)
      {
        if (plain[j][i] == spotty[k][i])
        {
          result.push_back(plain[j][i]);
        }
      }
    }

    if (result.size() == 0)
      counter++;
  }

  cout << counter << endl;
}

/*
this question is very simple to solve this problem we need to check if there is any intersection between
two vectors that is created in the xth position of gnome. Here I implemented using vector but we can use any other thing

like sets... set_intersection to check if there is any itersection
*/