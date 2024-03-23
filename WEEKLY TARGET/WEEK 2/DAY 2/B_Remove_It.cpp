#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    vector<int> ar;
    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        if (v != x)
        {
            ar.push_back(v);
        }
    }
    for (int v : ar)
    {
        cout << v << " ";
    }

    return 0;
}