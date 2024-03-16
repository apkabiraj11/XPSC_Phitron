#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<ll> ar(n);
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
    }
    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
    {
        sort(ar.begin(), ar.end());

        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 == 1)
            {
                sum -= ar[i];
                break;
            }
        }
        cout << sum << endl;
    }

    return 0;
}