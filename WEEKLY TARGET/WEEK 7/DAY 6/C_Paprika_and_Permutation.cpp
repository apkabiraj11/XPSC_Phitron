/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 08 May 2024 ||  11:00:47",
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
        set<int> st;
        for (int i = 1; i <= n; i++)
            st.insert(i);

        vector<int> ar;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (st.find(x) != st.end())
                st.erase(x);
            else
                ar.push_back(x);
        }
        sort(ar.begin(), ar.end());
        int ans = 0;
        int cnt = 0;
        for (int i = 1; i <= n; i++)
        {
            if (st.find(i) == st.end())
            {
                continue;
            }
            if (ans == -1)
                break;
            if (ar[cnt] <= i * 2)
                ans = -1;
            else
                ans++, cnt++;
        }
        cout << ans << ln;
    }

    return 0;
}