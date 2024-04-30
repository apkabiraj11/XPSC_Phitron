/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 30 April 2024 ||  17:48:31",
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
    int n, k;
    cin >> n >> k;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    while (k--)
    {
        int key;
        cin >> key;

        int l = 0, r = n - 1;
        bool ok = false;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (ar[mid] == key)
            {
                ok = true;
                break;
            }
            else if (ar[mid] < key)
            {
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        if (ok)
            yes;
        else
            no;
    }

    return 0;
}