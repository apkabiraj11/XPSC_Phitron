/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 01 April 2024 ||  18:02:33",
*/
#include <bits/stdc++.h>
#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
const int N = 2e5 + 5;
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
        vector<int> ar(n);
        vector<bool> flag(N, false);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        int ans = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (flag[ar[i]] == true)
            {
                break;
            }
            else
            {
                ans++;
                flag[ar[i]] = true;
            }
        }
        cout << n - ans << ln;
    }

    return 0;
}