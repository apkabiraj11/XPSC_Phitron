/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 09 May 2024 ||  00:57:48",
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
    int n, a, b;
    cin >> n >> a >> b;
    int ans = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        int k = min(a / i, b / (n - i));

        ans = max(ans, k);
    }
    cout << ans << ln;

    return 0;
}