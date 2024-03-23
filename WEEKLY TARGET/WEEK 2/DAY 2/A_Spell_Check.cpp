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
        string s;
        cin >> s;
        string b = "Timur";
        sort(s.begin(), s.end());
        sort(b.begin(), b.end());
        if (s == b)
        {
            yes;
        }
        else
        {
            no;
        }
    }
    return 0;
}