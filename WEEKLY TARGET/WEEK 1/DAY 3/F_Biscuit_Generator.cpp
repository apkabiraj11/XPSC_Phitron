#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int a, b, t;
    cin >> a >> b >> t;
    t = t + 0.5;
    int rem = t / a;
    cout << rem * b << endl;

    return 0;
}