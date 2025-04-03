#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, trg;
        cin >> s >> trg;

        int j = trg.size() - 1;

        bool impossible = false;
        map<char, int> tmp;

        for (int i = s.size() - 1; i >= 0 && !impossible && j >= 0; i--)
        {
            if (s[i] == trg[j])
            {
                tmp[s[i]]++;

                // cout<<s[i]<<" "<<trg[j]<<endl;
                int tc_cnt = 0;
                for (int q = i; q < s.size(); q++)
                {
                    if (s[q] == s[i])
                    {

                        // cout << s[q] << " " << s[i] << endl;
                        tc_cnt++;
                    }
                }

                if (tmp[s[i]] != tc_cnt)
                {

                    impossible = true;
                    break;
                }
                // but before that check if s[i] does not exist between current i and last j
                j--;
            }
        }
        // cout << j << endl;
        if (j == -1 && !impossible)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}