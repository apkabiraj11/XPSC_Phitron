/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 06 May 2024 ||  21:04:26",
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
        int q;
        cin >> q;
        vector<int> v;
        int x;
        cin >> x;
        q--;
        v.push_back(x);
        int mx = x;
        int mn = x;
        string s;
        s.push_back('1');
        bool flag = true;
        while (q--)
        {
            int a;
            cin >> a;
            int back = v.back();
            if (back <= a && flag)
            {
                v.push_back(a);
                s.push_back('1');
            }
            else if (a <= v[0] && flag)
            {
                v.push_back(a);
                s.push_back('1');
                flag = false;
            }
            else
            {
                if (a >= v.back() && a <= v[0] && flag == false)
                {
                    v.push_back(a);
                    s.push_back('1');
                }
                else
                    s.push_back('0');
            }
        }
        cout << s << ln;
    }

    return 0;
}