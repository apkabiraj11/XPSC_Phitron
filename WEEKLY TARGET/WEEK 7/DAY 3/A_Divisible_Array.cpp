/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 05 May 2024 ||  17:46:57",
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
        int sum = 0;
        vector<int> ans;
        for (int i = 1; i <= n; i++)
        {
            ans.push_back(i);
            sum += i;
        }
        if (sum % n != 0)
        {
            ans[0] = ans[0] + (sum % n);
        }
        for (int v : ans)
        {
            cout << v << " ";
        }
        cout << ln;
    }

    return 0;
}