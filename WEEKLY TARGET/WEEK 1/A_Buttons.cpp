#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    int sum = 0;
    if (a <= b)
    {
        sum += b;
        b--;
        sum += max(a, b);
        cout << sum << endl;
    }
    else
    {
        sum += a;
        a--;
        sum += max(a, b);
        cout << sum << endl;
    }

    return 0;
}