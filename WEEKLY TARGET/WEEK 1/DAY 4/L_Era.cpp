#include <bits/stdc++.h>
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
        vector<int> ar(n + 1);
        int cnt = 0;
        int m = INT_MIN;
        for (int i = 1; i <= n; i++)
        {
            cin >> ar[i];
            m = max(m, ar[i] - i);
        }
        cout << m << endl;
    }

    return 0;
}