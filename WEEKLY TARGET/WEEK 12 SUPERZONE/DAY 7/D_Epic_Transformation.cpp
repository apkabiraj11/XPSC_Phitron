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
        vector<int> ar(n);
        map<ll, ll> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mp[ar[i]]++;
        }
        priority_queue<int> pq;
        for (auto [x, y] : mp)
        {
            pq.push(y);
        }
        int ans = n;
        while (pq.size() >= 2)
        {
            int x, y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            x--;
            y--;
            ans -= 2;
            if (x)
                pq.push(x);
            if (y)
                pq.push(y);
        }
        cout << ans << ln;
    }

    return 0;
}