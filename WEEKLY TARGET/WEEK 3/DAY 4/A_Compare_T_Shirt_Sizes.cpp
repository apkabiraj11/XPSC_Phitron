/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 01 April 2024 ||  20:18:05",
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
        string a, b;
        cin >> a >> b;
        char first;
        for (char c : a)
        {
            if (c != 'X')
            {
                first = c;
            }
        }
        char second;
        for (char c : b)
        {
            if (c != 'X')
            {
                second = c;
            }
        }
        // find all possible output
        if (first == second && first != 'L')
        {
            if (a > b)
            {
                cout << '<' << ln;
            }
            else if (a == b)
                cout << '=' << ln;
            else
                cout << '>' << ln;
        }
        else if (first == second && first == 'L')
        {
            if (a > b)
            {
                cout << '>' << ln;
            }
            else if (a == b)
                cout << '=' << ln;
            else
                cout << '<' << ln;
        }
        else
        {
            if (first > second)
            {
                cout << '<' << ln;
            }
            else
                cout << '>' << ln;
        }
    }

    return 0;
}