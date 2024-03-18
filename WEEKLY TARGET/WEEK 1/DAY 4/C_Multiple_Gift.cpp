#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll a, b;
    cin >> a >> b;
    int cnt = 0;
    while (a <= b)
    {
        cnt++;
        a *= 2;
    }
    cout << cnt << endl;

    return 0;
}