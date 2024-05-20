/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 19 May 2024 ||  23:41:57",
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
    vector<bool> prime(1001, true);
    for (int i = 2; i * i <= 1001; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= 1001; j += i)
            {
                prime[j] = false;
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        vector<bool> trk(n, true);
        vector<int> ans(n);
        int curr = 1;
        for (int i = 2; i <= 1000; i++)
        {
            if (prime[i])
            {
                bool got = false;
                for (int j = 0; j < n; j++)
                {
                    if (trk[j])
                    {
                        if (ar[j] % i == 0)
                        {
                            got = true;
                            trk[j] = false;
                            ans[j] = curr;
                        }
                    }
                }
                if (got)
                    curr++;
            }
        }

        cout << curr - 1 << ln;
        for (int v : ans)
        {
            cout << v << " ";
        }
        cout << ln;
    }

    return 0;
}