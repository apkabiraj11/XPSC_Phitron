/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 25 April 2024 ||  12:23:51",
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
        int jora = 0;
        int unpair = 0;
        int i = 0;
        int j = n - 1;
        while (i < j)
        {
            if (s[i] == s[j])
            {
                jora += 2;
            }
            else
                unpair++;
            i++;
            j--;
        }
        string ans;
        int total = jora + unpair;
        for (int i = 0; i <= n; i++)
        {
            if (i < unpair)
                cout << '0';
            else if (i % 2 == unpair % 2 && i <= total)
                cout << '1';
            else if (n % 2 == 1 && i <= total + 1)
                cout << '1';
            else
                cout << '0';
        }
        cout << ln;
    }

    return 0;
}