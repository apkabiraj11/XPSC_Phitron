/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 25 April 2024 ||  10:44:54",
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
        ll n;
        cin >> n;
        vector<ll> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        sort(ar.begin(), ar.end(), greater<ll>());
        ll cnt = 0;
        priority_queue<ll> pq;
        pq.push(ar[0]);
        for (int i = 1; i < n; i++)
        {
            ll x = pq.top();
            if (x >= ar[i])
            {
                x ^= ar[i];
                pq.pop();
                pq.push(x);
            }
            else
                pq.push(ar[i]);
        }
        cout << pq.size() << ln;
    }

    return 0;
}