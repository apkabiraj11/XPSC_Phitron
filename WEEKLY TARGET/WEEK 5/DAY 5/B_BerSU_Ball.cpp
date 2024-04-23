/*
    APURBA KABIRAJ
    TARGET ->  RED

    "// _Created : 23 April 2024 ||  12:25:34",
*/
#include <bits/stdc++.h>
#define ll long long int
#define pair pair<int, int>
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vector<int> boy(n);
    for (int i = 0; i < n; i++)
    {
        cin >> boy[i];
    }

    map<int, int> mp;

    int m;
    cin >> m;
    vector<int> girl(m);
    for (int i = 0; i < m; i++)
    {
        cin >> girl[i];
        mp[girl[i]]++;
    }

    sort(boy.begin(), boy.end());
    sort(girl.begin(), girl.end());

    int cnt = 0;
    vector<bool> track(102, true);

    for (int i = 0; i < n; i++)
    {
        bool ok = true;
        for (int j = 0; j < m; j++)
        {
            if ((abs(boy[i] - girl[j]) <= 1) && ok && track[girl[j]])
            {
                cnt++;
                track[girl[j]] = false;
                ok = false;
                if (mp[girl[j]] > 1)
                {
                    track[girl[j]] = true;
                    mp[girl[j]]--;
                }
            }
        }
    }
    cout << cnt << ln;

    return 0;
}