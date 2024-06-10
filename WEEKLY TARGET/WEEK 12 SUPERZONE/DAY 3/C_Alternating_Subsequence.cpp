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
bool polarity(int x)
{
    if (x < 0)
        return false;
    else if (x > 0)
        return true;
}
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
        ll sum = 0;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (v.empty())
            {
                v.push_back(x);
            }
            else if (polarity(v.back()) && polarity(x))
            {
                v.push_back(x);
            }
            else if (polarity(v.back()) == false && polarity(x) == false)
            {
                v.push_back(x);
            }
            else
            {
                sort(v.begin(), v.end());
                sum += v.back();
                v.clear();
                v.push_back(x);
            }
        }
        sort(v.begin(), v.end());
        sum += v.back();
        cout << sum << ln;
    }

    return 0;
}