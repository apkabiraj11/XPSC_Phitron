#include <bits/stdc++.h>
#define ll long long int
#define pii pair<int, int>
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
        int n;
        cin >> n;
        multiset<pii> s, p, q;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            s.insert({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            p.insert({x, i});
        }
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            q.insert({x, i});
        }
        list<int> index;
        index.push_back(-1);
        ll sum = 0;
        bool flag1 = true, flag2 = true, flag3 = true;
        while (index.size() < 3)
        {
            pii x;
            if (!s.empty() && x < *s.rbegin())
                x = *s.rbegin();
            if (!p.empty() && x < *p.rbegin())
                x = *p.rbegin();
            if (!q.empty() && x < *q.rbegin())
                x = *q.rbegin();

            if (index.front() != x.second && index.back() != x.second)
            {
                if (index.front() == -1)
                    index.pop_front();

                if (x == *s.rbegin() && flag1)
                {
                    sum += x.first;
                    index.push_back(x.second);
                    flag1 = false;
                    s.erase(*s.rbegin());
                }
                else if (x == *p.rbegin() && flag2)
                {
                    sum += x.first;
                    index.push_back(x.second);
                    flag2 = false;
                    p.erase(*p.rbegin());
                }
                else if (x == *q.rbegin() && flag3)
                {
                    sum += x.first;
                    index.push_back(x.second);
                    flag3 = false;
                    q.erase(*q.rbegin());
                }
                else if (x == *s.rbegin() && !flag1)
                    s.erase(*s.rbegin());
                else if (x == *p.rbegin() && !flag2)
                    p.erase(*p.rbegin());
                else if (x == *q.rbegin() && !flag3)
                    q.erase(*q.rbegin());
            }
            else
            {
                if (x == *s.rbegin())
                    s.erase(*s.rbegin());
                else if (x == *p.rbegin())
                    p.erase(*p.rbegin());
                else if (x == *q.rbegin())
                    q.erase(*q.rbegin());
            }
        }
        cout << sum << ln;
    }

    return 0;
}
