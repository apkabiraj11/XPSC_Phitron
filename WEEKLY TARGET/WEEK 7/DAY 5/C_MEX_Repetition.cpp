/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 07 May 2024 ||  18:47:23",
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
        int n, k;
        cin >> n >> k;
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        vector<int> store;
        store = ar;
        sort(store.begin(), store.end());
        int v = 0;
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            if (store[i] != j)
            {
                v = j;
                break;
            }
            j++;
        }
        ar.push_back(j);
        k = k % (n + 1);
        list<ll> ans(ar.begin(), ar.end());
        for (int i = 0; i < k; i++)
        {
            ll x = ans.back();
            ans.pop_back();
            ans.push_front(x);
        }
        ans.pop_back();
        for (auto it : ans)
        {
            cout << it << " ";
        }
        cout << ln;
    }

    return 0;
}