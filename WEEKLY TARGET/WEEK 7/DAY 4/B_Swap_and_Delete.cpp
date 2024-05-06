#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int one = 0;
        int zero = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
                zero++;
        }
        string cp;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                if (one > 0)
                {
                    cp.push_back('1');
                    one--;
                }
                else
                {
                    break;
                }
            }
            if (s[i] == '1')
            {
                if (zero > 0)
                {
                    cp.push_back('0');
                    zero--;
                }
                else
                    break;
            }
        }
        cout << s.size() - cp.size() << endl;
    }

    return 0;
}