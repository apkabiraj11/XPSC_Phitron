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
        vector<int> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        for (int i = 0; i < n; i++)
        {
            int b;
            cin >> b;
            int val = ar[i];
            for (int j = 0; j < b; j++)
            {
                char c;
                cin >> c;
                if (c == 'U')
                {
                    val--;
                }
                else if (c == 'D')
                {
                    val++;
                }
            }
            if (val > 9)
            {
                cout << val - 10 << " ";
            }
            else if (val < 0)
            {
                cout << 10 + val << " ";
            }
            else
                cout << val << " ";
        }
        cout << ln;
    }

    return 0;
}