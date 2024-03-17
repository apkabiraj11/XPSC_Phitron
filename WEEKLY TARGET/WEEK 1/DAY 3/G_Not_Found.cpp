#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    string cmp = "abcdefghijklmnopqrstuvwxyz";
    set<char> c;
    for (char val : s)
    {
        c.insert(val);
    }
    int i = 0;
    bool flag = false;
    for (auto it : c)
    {
        if (it != cmp[i])
        {
            cout << cmp[i] << endl;
            flag = true;
            return 0;
        }
        i++;
    }
    if (flag == false && i < 26)
    {
        cout << cmp[i] << endl;
        return 0;
    }
    cout << "None" << endl;

    return 0;
}