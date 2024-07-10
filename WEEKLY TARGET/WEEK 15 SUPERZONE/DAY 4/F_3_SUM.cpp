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
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            int val = x % 10;
            if (mp[val] < 3)
                mp[val]++;
        }
        vector<int> v;
        for (auto [x, y] : mp)
        {
            for (int i = 1; i <= y; i++)
            {
                v.push_back(x);
            }
        }
        bool paisi = false;
        for (int i = 0; i < v.size() - 2; i++)
        {
            for (int j = i + 1; j < v.size() - 1; j++)
            {
                for (int k = j + 1; k < v.size(); k++)
                {
                    ll sum = v[i] + v[j] + v[k];
                    if ((sum % 10) == 3)
                    {
                        paisi = true;
                        break;
                    }
                }
            }
        }
        if (paisi)
            yes;
        else
            no;
    }

    return 0;
}