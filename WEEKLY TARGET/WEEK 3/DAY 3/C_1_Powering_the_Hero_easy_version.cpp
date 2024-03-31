/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 31 March 2024 ||  18:22:12",
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
        priority_queue<ll> pq;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (x > 0)
                pq.push(x);
            if (x == 0)
            {
                if (!pq.empty())
                {
                    sum += pq.top();
                    pq.pop();
                }
            }
        }
        cout << sum << ln;
    }

    return 0;
}