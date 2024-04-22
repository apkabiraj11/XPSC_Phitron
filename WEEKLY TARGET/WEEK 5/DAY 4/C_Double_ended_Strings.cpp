/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 22 April 2024 ||  19:46:21",
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
        string a, b;
        cin >> a >> b;
        map<string, int> m;
        int maxans = INT_MIN;
        if (a > b)
            swap(a, b);

        int one = a.size();
        int two = b.size();
        for (int i = 0; i < one; i++)
        {
            for (int j = 1; j <= one - i; j++)
            {
                string x = a.substr(i, j);
                m[x] = x.size();
            }
        }
        for (auto v : m)
        {
            string x = v.first;
            if (b.find(x) != string::npos)
            {
                if (maxans < v.second)
                {
                    maxans = v.second;
                }
            }
        }

        int ans = one + two;
        cout << ans - (2 * maxans) << ln;
    }

    return 0;
}