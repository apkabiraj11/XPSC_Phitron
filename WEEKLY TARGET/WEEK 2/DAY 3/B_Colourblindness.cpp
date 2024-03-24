#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<char> s(n);
        vector<char> st(n);
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> st[i];
        }
        for (int i = 0; i < n; i++)
        {
            if ((s[i] == 'G' || s[i] == 'B') && (st[i] == 'G' || st[i] == 'B'))
            {
                s[i] = 'G';
                st[i] = 'G';
            }
        }
        int flag = 1;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != st[i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}