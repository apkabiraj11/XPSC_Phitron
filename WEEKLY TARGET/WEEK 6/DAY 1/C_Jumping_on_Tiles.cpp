/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 27 April 2024 ||  00:41:53",
*/
#include <bits/stdc++.h>
#define ll long long int
// #define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        ll n = s.length();
        vector<pair<char, int>> order;

        char min_char = min(s[0], s[n - 1]);
        char max_char = max(s[0], s[n - 1]);

        for (int i = 0; i < n; i++)
        {
            if ((s[i] >= min_char and s[i] <= max_char))
            {
                order.push_back({s[i], i});
            }
        }
        sort(order.begin(), order.end(), [&](pair<char, int> a, pair<char, int> b)
             { return a.second < b.second; });
        if (order.size() > 2)
        {
            sort(order.begin() + 1, order.begin() + order.size() - 1, [&](pair<char, int> a, pair<char, int> b)
                 {
                if(s[0]>s[n-1]){
                    return a.first>b.first;
                }
                return a.first<b.first; });
        }
        vector<int> seq;

        ll moves = 0;

        seq.push_back(1);

        for (int i = 1; i < order.size(); i++)
        {
            moves += abs(order[i - 1].first - order[i].first);
            seq.push_back(order[i].second + 1);
        }

        cout << moves << " " << seq.size() << endl;

        for (auto i : seq)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}