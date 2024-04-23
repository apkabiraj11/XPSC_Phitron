/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 23 April 2024 ||  14:10:42",
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
        string s;
        cin >> s;
        map<char, int> mp;
        for (char c : s)
        {
            mp[c]++;
        }
        if (mp.size() >= 3)
            yes;
        else if (mp.size() == 2)
        {
            int cnt1 = 0;
            int cnt2 = 0;
            for (auto v : mp)
            {
                if (v.second >= 2 && v.second % 2 == 1)
                {
                    cnt1++;
                }
                else if (v.second >= 2)
                    cnt2++;
            }
            if (cnt1 == cnt2 || abs(cnt1 - cnt2) % 2 == 0)
                yes;
            else
                no;
        }
        else
            no;
    }

    return 0;
}