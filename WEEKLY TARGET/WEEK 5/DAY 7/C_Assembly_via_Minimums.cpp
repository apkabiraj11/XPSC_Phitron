/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 26 April 2024 ||  17:39:32",
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
        int m = (n * (n - 1)) / 2;
        vector<int> ar(m);
        for (int i = 0; i < m; i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end());
        vector<int> ans;
        ans.push_back(int(1e9));
        int j = 1;
        for (int i = m - 1; i >= 0; i -= j)
        {
            ans.push_back(ar[i]);
            j++;
            if (ans.size() == n)
            {
                break;
            }
        }
        for (int v : ans)
        {
            cout << v << " ";
        }
        cout << ln;
    }

    return 0;
}