/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 10 May 2024 ||  11:09:33",
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
        multiset<int> ar;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ar.insert(x);
        }
        auto ok = [&](int k)
        {
            multiset<int> st = ar;

            for (int i = 1; i <= k; i++)
            {
                if (st.empty())
                    return false;
                int x = k - i + 1;
                auto it = st.upper_bound(x);
                if (it == st.begin())
                    return false;
                it--;
                st.erase(it);
                if (!st.empty())
                {
                    int y = *st.begin();
                    st.erase(st.begin());
                    st.insert(y + x);
                }
            }
            return true;
        };

        int l = 1;
        int r = n;
        int ans = 0;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (ok(mid))
            {
                ans = mid;
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        cout << ans << ln;
    }

    return 0;
}