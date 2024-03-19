/*
    APURBA KABIRAJ
    TARGET ->  RED
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

    int n, m;
    cin >> n >> m;
    vector<int> ar(n + 1);
    vector<int> br(m + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> br[i];
    }

    ll ans = 0;
    ll cnt1 = 0;
    ll cnt2 = 0;
    int i = 1;
    int j = 1;
    while (i <= n && j <= m)
    {
        int curr = ar[i];
        while (ar[i] == curr && i <= n)
        {
            cnt1++;
            i++;
        }
        while (curr > br[j] && j <= m)
        {
            j++;
        }
        while (br[j] == curr && j <= m)
        {
            cnt2++;
            j++;
        }
        ans += (cnt1 * cnt2);
        cnt1 = 0;
        cnt2 = 0;
    }
    cout << ans << ln;

    return 0;
}