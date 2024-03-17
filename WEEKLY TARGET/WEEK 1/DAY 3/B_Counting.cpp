#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    int x = (b - (a - 1));
    (x < 0) ? cout << 0 << '\n' : cout << x << '\n';

    return 0;
}