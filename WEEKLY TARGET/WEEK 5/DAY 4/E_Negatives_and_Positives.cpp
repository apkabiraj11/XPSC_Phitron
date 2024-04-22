/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 22 April 2024 ||  14:59:04",
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
        int n;
        cin >> n;
        vector<int> ar(n);
        vector<int> pos;
        int neg = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            sum += abs(ar[i]);
            if (ar[i] < 0)
                neg++;
            pos.push_back(abs(ar[i]));
        }
        sort(pos.begin(), pos.end());

        if (neg % 2 == 1)
        {
            ll mn = pos[0];
            sum -= 2 * mn;
        }
        cout << sum << ln;
    }

    return 0;
}