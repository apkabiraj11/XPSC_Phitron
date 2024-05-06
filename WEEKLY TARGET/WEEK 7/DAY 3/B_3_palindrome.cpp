/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 05 May 2024 ||  17:23:38",
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
    string s;
    bool odd = false;
    if (n % 2 == 1)
    {
        n = n - 1;
        odd = true;
    }
    if (n == 1)
    {
        cout << "a" << ln;
        return 0;
    }
    string a = "aa";
    string b = "bb";
    while (s.size() < n)
    {
        s += a;
        if (s.size() < n)
            s += b;
    }
    if (odd)
    {
        if (s.back() == 'a')
        {
            s.push_back('b');
        }
        else
            s.push_back('a');
    }
    cout << s << ln;

    return 0;
}