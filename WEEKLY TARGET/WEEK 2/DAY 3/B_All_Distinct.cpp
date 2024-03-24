/*
    APURBA KABIRAJ
    TARGET ->  RED
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
        set<int> ar;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ar.insert(x);
        }
        if ((n - ar.size()) % 2 == 0)
        {
            cout << ar.size() << ln;
        }
        else
            cout << ar.size() - 1 << ln;
    }

    return 0;
}