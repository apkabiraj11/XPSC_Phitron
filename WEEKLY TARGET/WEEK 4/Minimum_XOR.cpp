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
        vector<int> ar(n);
        int x_or = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            x_or ^= ar[i];
        }
        int ans = 0;
        ans = x_or;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans, x_or ^ ar[i]);
        }
        cout << ans << endl;
    }

    return 0;
}