#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        vector<int> cap;
        vector<int> small;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B')
            {
                cap.push_back(i);
            }
            else if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b')
            {
                small.push_back(i);
            }
            if (s[i] == 'B')
            {
                if (cap.size() > 0)
                {
                    cap.pop_back();
                }
            }
            else if (s[i] == 'b')
            {
                if (small.size() > 0)
                {
                    small.pop_back();
                }
            }
        }
        for (int val : small)
        {
            cap.push_back(val);
        }
        sort(cap.begin(), cap.end());
        for (int val : cap)
        {
            cout << s[val];
        }
        cout << endl;
    }
    return 0;
}