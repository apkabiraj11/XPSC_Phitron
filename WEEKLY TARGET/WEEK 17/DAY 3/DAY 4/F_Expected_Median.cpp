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
const ll mod = 1e9 + 7;
ll get(ll x, ll y)
{
    ll mul = 1;
    while (y--)
    {
        mul *= x;
        x--;
    }
    return mul;
}
ll get2(ll y)
{
    ll mul = 1;
    while (y >= 1)
    {
        mul *= y;
        y--;
    }
    return mul;
}
ll calncr(ll x, ll y)
{
    ll up = get(x, y);
    ll down = get2(y);
    return up / down;
}
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
        int one = 0;
        int zero = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x == 1)
                one++;
            else
                zero++;
        }
        ll sum = 0;
        ll needone = (k / 2) + 1;
        ll needzero = k / 2;
        while (needone <= k && needone <= one)
        {
            ll a = calncr(one, needone);
            ll b = calncr(zero, needzero);
            sum += (1LL * a * b);
            needone++;
        }
        cout << sum << ln;
    }

    return 0;
}