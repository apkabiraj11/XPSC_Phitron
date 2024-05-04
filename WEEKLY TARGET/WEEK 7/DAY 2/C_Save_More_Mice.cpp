/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 04 May 2024 ||  10:04:32",
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
        int n, k;
        cin >> n >> k;
        vector<int> ar(k);
        for (int i = 0; i < k; i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end(), greater<int>());

        int time = 0;
        int ans = 0;
        for (int i = 0; i < k; i++)
        {
            if (time < ar[i])
            {
                time += (n - ar[i]);
                ans++;
            }
            else
                break;
        }
        cout << ans << ln;
    }

    return 0;
}