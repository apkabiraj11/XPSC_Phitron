#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    if (c % a == 0 || c % b == 0)
    {
        cout << "Yes" << endl;
        return 0;
    }
    bool flag = true;
    for (int i = 0; i <= c; i++)
    {
        for (int j = 0; j <= c; j++)
        {
            int x = (a * i) + (b * j);
            if (x == c)
            {
                flag = false;
                break;
            }
        }
    }
    if (flag)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}