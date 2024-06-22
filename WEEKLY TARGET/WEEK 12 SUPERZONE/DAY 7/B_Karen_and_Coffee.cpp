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
#define pair pair<ll, ll>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
const int N = 2e5 + 5;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, k, q;
    cin >> n >> k >> q;
    vector<int> dif(N);
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        dif[l]++;
        dif[r + 1]--;
    }
    for (int i = 1; i < N; i++)
    {
        dif[i] = dif[i - 1] + dif[i];
    }
    for (int i = 1; i < N; i++)
    {
        if (dif[i] >= k)
            dif[i] = 1;
        else
            dif[i] = 0;
    }
    for (int i = 1; i < N; i++)
    {
        dif[i] = dif[i - 1] + dif[i];
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << dif[b] - dif[a - 1] << ln;
    }

    return 0;
}