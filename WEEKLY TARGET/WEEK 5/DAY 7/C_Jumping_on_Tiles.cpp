/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 26 April 2024 ||  21:13:55",
*/
#include <bits/stdc++.h>
#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        map<char, int> mp;
        for (int i = 'a', j = 1; i <= 'z'; i++, j++)
        {
            mp[i] = j;
        }

        map<char, int> inx;
        string s;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            inx[s[i]] = i + 1;
        }

        char a = s[0];
        char b = s[s.size() - 1];

        string work;

        s.pop_back();
        reverse(s.begin(), s.end());
        s.pop_back();

        if (a < b)
            sort(s.begin(), s.end());
        else
        {
            sort(s.begin(), s.end());
            reverse(s.begin(), s.end());
        }

        work.push_back(a);
        work += s;
        work.push_back(b);

        s = work;

        ll sum = 0;
        int cnt = 1;
        int val = mp[s[0]];
        vector<int> v;
        v.push_back(1);

        for (int i = 1; i < s.size(); i++)
        {
            if (s[i] >= s[0] && s[i] <= s[s.size() - 1])
            {
                int x = abs(mp[s[i]] - val);
                sum += x;
                cnt++;
                val = mp[s[i]];
                v.push_back(inx[s[i]]);
            }
            else if (s[0] >= s[i] && s[s.size() - 1] <= s[i])
            {
                int x = abs(mp[s[i]] - val);
                sum += x;
                cnt++;
                val = mp[s[i]];
                v.push_back(inx[s[i]]);
            }
        }
        cout << sum << " " << cnt << ln;
        for (int it : v)
        {
            cout << it << " ";
        }
        cout << ln;
    }

    return 0;
}