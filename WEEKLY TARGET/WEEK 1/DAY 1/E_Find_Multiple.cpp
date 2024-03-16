#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    int v = -1;

    for (int i = a; i <= b; i++)
    {
        if (i % c == 0)
        {
            v = i;
            break;
        }
    }
    (v != -1) ? cout << v << endl : cout << -1 << endl;

    return 0;
}