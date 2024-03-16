#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> ar(n + 1);
    // vector<int> cm(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    for (int i = 1; i <= n; i++)
    {
        if (ar[i] + 1 != ar[i + 1])
        {
            cout << ar[i] + 1 << '\n';
            break;
        }
    }

    return 0;
}