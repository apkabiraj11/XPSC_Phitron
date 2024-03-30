/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 30 March 2024 ||  17:47:09",
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
        int n;
        cin >> n;
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        if (s[0] != 'm' || n < 4)
        {
            no;
            continue;
        }
        bool flagm = true;
        bool flage = true;
        bool flago = true;
        bool flagw = true;
        bool ans = true;
        set<char> ss;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'm' && flagm)
            {
                ans = true;
                ss.insert('m');
            }
            else if (s[i] == 'e' && flage)
            {
                ans = true;
                flagm = false;
                ss.insert('e');
            }
            else if (s[i] == 'o' && flago)
            {
                ans = true;
                flage = false;
                ss.insert('o');
            }
            else if (s[i] == 'w' && flagw)
            {
                ans = true;
                flago = false;
                ss.insert('w');
            }
            else
            {
                ans = false;
                break;
            }
        }
        if (ans && ss.size() == 4)
            yes;
        else
            no;
    }

    return 0;
}