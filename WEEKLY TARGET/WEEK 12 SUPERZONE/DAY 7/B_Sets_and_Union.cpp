/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 28 May 2024 ||  20:04:38",
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln

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
        vector<int> ar[n];
        set<int> total;
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            ar[i].resize(k);
            for (int j = 0; j < k; j++)
            {
                cin >> ar[i][j];
                total.insert(ar[i][j]);
            }
        }
        vector<int> all(total.begin(), total.end());
        int ans = 0;
        for (auto check : all)
        {
            set<int> st;
            for (int i = 0; i < n; i++)
            {
                bool paisi = false;
                for (int j = 0; j < ar[i].size(); j++)
                {
                    if (ar[i][j] == check)
                    {
                        paisi = true;
                        break;
                    }
                }
                if (paisi == false)
                {
                    for (int j = 0; j < ar[i].size(); j++)
                    {
                        st.insert(ar[i][j]);
                    }
                }
            }
            vector<int> temp(st.begin(), st.end());
            if (temp != all)
            {
                ans = max(ans, (int)temp.size());
            }
        }
        cout << ans << ln;
    }

    return 0;
}