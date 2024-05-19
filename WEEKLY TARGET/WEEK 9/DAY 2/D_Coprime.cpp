/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 19 May 2024 ||  19:30:11",
*/
#include <bits/stdc++.h>
#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;

const int x = 1e4 + 5;
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
        vector<int> ar(n + 1);
        map<int, int> mp;
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
            mp[ar[i]] = i;
        }

        int sum = -1;
        for (int i = 1000; i >= 1; i--)
        {
            for (int j = 1000; j >= 1; j--)
            {
                if (mp[i] != 0 && mp[j] != 0)
                {
                    if (__gcd(i, j) == 1)
                    {

                        sum = max(sum, mp[i] + mp[j]);
                    }
                }
            }
        }
        cout << sum << ln;
    }

    return 0;
}