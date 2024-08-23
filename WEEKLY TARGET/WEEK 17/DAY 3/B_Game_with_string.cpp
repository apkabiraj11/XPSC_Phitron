/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 28 May 2024 ||  20:04:38",
*/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "Yes" << ln
#define no cout << "No" << ln

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int n = s.size();
    if (n < 2)
    {
        no;
        return 0;
    }
    int cnt = 0;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (!st.empty())
        {
            if (st.top() == s[i])
            {
                cnt++;
                st.pop();
            }
            else
                st.push(s[i]);
        }
        else
            st.push(s[i]);
    }
    if (cnt % 2 == 0)
        no;
    else
        yes;

    return 0;
}