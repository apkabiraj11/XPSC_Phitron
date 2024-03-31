/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 31 March 2024 ||  00:51:22",
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
        string s;
        cin >> s;
        vector<ll> store;
        ll sum = 0;
        int minchange = 0;
        for (int i = 0; i < n; i++)
        {
            int left = i;
            int right = n - (i + 1);
            if (s[i] == 'L')
            {
                if (left < right)
                {
                    sum += right;
                    store.push_back(right - left);
                    minchange++;
                }
                else
                {
                    sum += left;
                }
            }
            else
            {
                if (left > right)
                {
                    sum += left;
                    store.push_back(left - right);
                    minchange++;
                }
                else
                {
                    sum += right;
                }
            }
        }
        sort(store.begin(), store.end(), greater<ll>());
        ll temp = sum;
        vector<ll> ans(n, sum);
        for (int i = minchange - 2; i >= 0; i--)
        {
            temp = temp - store.back();
            ans[i] = temp;
            store.pop_back();
        }
        for (auto v : ans)
        {
            cout << v << " ";
        }
        cout << ln;
    }

    return 0;
}