/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 25 March 2024 ||  21:29:25",
*/
#include <bits/stdc++.h>
#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;

bool kalindrom(vector<int> v, int val)
{
    int n = v.size();
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        if (v[i] == val)
        {
            i++;
        }
        else if (v[j] == val)
        {
            j--;
        }
        else if (v[i] != v[j])
            return false;
        else
        {
            i++;
            j--;
        }
    }
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
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        if (n <= 2)
        {
            yes;
            continue;
        }
        bool flag = true;
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            if (ar[i] != ar[j])
            {
                flag = kalindrom(ar, ar[i]) || kalindrom(ar, ar[j]);
                break;
            }
            i++;
            j--;
        }
        if (flag)
            yes;
        else
            no;
    }

    return 0;
}