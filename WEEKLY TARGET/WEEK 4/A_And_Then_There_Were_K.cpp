#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 1;
        while (ans <= n)
        {
            ans *= 2;
        }
        ans /= 2;
        ans--;
        cout << ans << '\n';
    }

    return 0;
}