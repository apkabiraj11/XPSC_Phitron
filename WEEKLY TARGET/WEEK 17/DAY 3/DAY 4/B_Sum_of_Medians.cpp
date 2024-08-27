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
using ordered_set = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

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
        int n, k;
        cin >> n >> k;
        deque<ll> ar(n * k);
        ll maybe = 0;
        for (int i = 0; i < (n * k); i++)
        {
            cin >> ar[i];
            maybe += ar[i];
        }
        ll sum = 0;
        if (n == 2)
        {
            for (int i = 0; i < ar.size(); i += 2)
            {
                sum += ar[i];
            }
            cout << sum << ln;
        }
        else if (n == 1)
        {
            cout << maybe << ln;
        }
        else
        {
            int idx;
            if (n % 2 == 0)
            {
                idx = n / 2;
            }
            else
                idx = (n / 2) + 1;
            while (!ar.empty())
            {
                vector<ll> v;
                for (int i = 1; i < idx; i++)
                {
                    v.push_back(ar.front());
                    ar.pop_front();
                }
                for (int i = 1; i <= n - idx + 1; i++)
                {
                    v.push_back(ar.back());
                    ar.pop_back();
                }
                sort(v.begin(), v.end());
                sum += v[idx - 1];
            }
            cout << sum << ln;
        }
    }
    return 0;
}
