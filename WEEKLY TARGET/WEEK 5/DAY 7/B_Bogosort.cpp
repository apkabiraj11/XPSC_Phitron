/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 26 April 2024 ||  01:33:28",
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
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end(), greater<int>());
        for (int v : ar)
        {
            cout << v << " ";
        }
        cout << ln;
    }

    return 0;
}