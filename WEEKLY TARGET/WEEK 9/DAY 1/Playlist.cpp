/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 18 May 2024 ||  00:21:22",
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
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int ans = 0;
    int l = 0;
    int r = 0;
    set<int> st;
    int cnt = 0;
    while (r < n)
    {
        auto it = st.find(ar[r]);
        if (it == st.end())
        {
            st.insert(ar[r]);
            r++;
        }
        else
        {
            while (ar[l] != ar[r])
            {
                st.erase(st.find(ar[l]));
                l++;
            }
            st.erase(st.find(ar[l]));
            l++;
        }
        ans = max(ans, (int)st.size());
    }
    cout << ans << ln;

    return 0;
}