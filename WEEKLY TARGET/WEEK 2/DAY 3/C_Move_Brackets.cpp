#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        stack<char> st;
        int cnt = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                st.push(c);
            }
            else
            {
                if (!st.empty() && st.top() == '(' && c == ')')
                {
                    st.pop();
                    continue;
                }
                else
                    cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}