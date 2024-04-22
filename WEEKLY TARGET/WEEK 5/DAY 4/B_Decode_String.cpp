/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 22 April 2024 ||  02:06:09",
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
        int k = 1;
        map<int, char> mp;
        for (char c = 'a'; c <= 'z'; c++)
        {
            mp[k] = c;
            k++;
        }

        int n;
        cin >> n;
        string s;
        cin >> s;

        string ans;
        for (int i = 0; i < s.size(); i++)
        {
            if (i <= s.size() - 2 && s[i + 2] == '0' && s[i + 3] != '0')
            {
                string x;
                x.push_back(s[i]);
                x.push_back(s[i + 1]);
                i = i + 2;
                int val = stoi(x);
                cout << mp[val];
            }
            else
            {
                int val = s[i] - '0';
                cout << mp[val];
            }
        }
        cout << ln;
    }

    return 0;
}