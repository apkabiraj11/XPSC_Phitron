/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 17 May 2024 ||  11:11:19",
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

    // vector<bool> prime(1e5 + 1, true);
    // for (int i = 2; i <= 1e5 + 1; i++)
    // {
    //     if (prime[i])
    //     {
    //         for (int j = i + i; j <= 1e5 + 1; j += i)
    //         {
    //             prime[j] = false;
    //         }
    //     }
    // }
    // vector<int> store;
    // for (int i = 2; i <= prime.size(); i++)
    // {
    //     if (prime[i])
    //         store.push_back(i);
    // }

    int n;
    cin >> n;

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                mp[j]++;
                while (x % j == 0)
                {
                    x /= j;
                }
            }
        }
        if (x > 1)
            mp[x]++;
    }
    int ans = 1;
    for (auto [x, y] : mp)
    {
        ans = max(ans, y);
    }
    cout << ans << ln;

    return 0;
}