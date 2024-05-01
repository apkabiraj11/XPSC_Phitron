/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 01 May 2024 ||  18:45:03",
*/
#include <bits/stdc++.h>
#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;
const ll value = 1e4 + 9;
vector<ll> build;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    for (int i = 1; i <= value; i++)
    {
        build.push_back(pow(i, 3));
    }

    int t;
    cin >> t;
    while (t--)
    {

        ll x;
        cin >> x;
        bool found = false;
        for (int i = 1; i < build.size(); i++)
        {
            ll fnd = x - pow(i, 3);
            int l = 0, r = build.size() - 1;
            while (l <= r)
            {
                int mid = (r + l) / 2;
                if (build[mid] == fnd)
                {
                    found = true;
                    break;
                }
                else if (build[mid] < fnd)
                {
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }
        }
        if (found)
            yes;
        else
            no;
    }

    return 0;
}