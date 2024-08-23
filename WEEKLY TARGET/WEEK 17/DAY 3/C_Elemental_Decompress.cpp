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
#define yes cout << "YES" << ln
#define no cout << "NO" << ln

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
        vector<int> ar(n);
        set<int>st;
        map<int, int> mp;
        int mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            st.insert(ar[i]);
            mp[ar[i]]++;
            mx = max(mx, ar[i]);
        }
        if (mx !=n)
            no;
        else if(mp[1]>1)
        {
            no;
        }
        else
        {
            set<int>besi;
            vector<int>collect(n+1);
            bool ok = false;
            for (auto [x, y] : mp)
            {
                if (y > 2)
                {
                    ok = true;
                    break;
                }
                if(y==2)
                {
                    besi.insert(x);
                    collect[x]=y;
                }
            }
            if (ok)
                no;
            else
            {
                    set<int>nai;
                    for(int i=1;i<=n;i++)
                    {
                        auto it = st.find(i);
                        if(it==st.end()) // taile nai 
                        {
                            nai.insert(i);
                        }
                    }

                    vector<int> opor(n+1), nis(n+1);
                    for(int i=0;i<n;i++)
                    {
                        if(mp[ar[i]]==1)
                        {
                            opor[i]=ar[i];
                            nis[i]=ar[i];
                        }
                    }
                    map<int,vector<int>>idx;
                    for(int i=0;i<n;i++)
                    {
                        if(ar[i]!=opor[i] && mp[ar[i]]==2)
                        {
                            opor[i]=ar[i];
                            idx[ar[i]].push_back(i);
                            mp[ar[i]]--;
                            continue;
                        }
                        if(ar[i]!=nis[i] && mp[ar[i]]==1)
                        {
                            nis[i]=ar[i];
                            idx[ar[i]].push_back(i);
                            mp[ar[i]]--;
                        }
                    }
                    for(auto [x,y]:idx)
                    {
                        int fast = y[0];
                        int second = y[1];
                        int mn = *nai.begin();
                        if(opor[fast]==0)
                        {
                            opor[fast]=mn;
                        }
                        else if(nis[fast]==0)nis[fast]=mn;
                        if(opor[second]==0)opor[second]=mn;
                        else if(nis[second]==0)nis[second]=mn;
                        nai.erase(nai.begin());
                    }
                    bool ans = true;
                    for(int i=0;i<n;i++)
                    {
                        int maxx = max(opor[i],nis[i]);
                        if(maxx!=ar[i])
                        {
                            ans = false;
                            break;
                        }
                    }
                    if(!ans)
                    {
                        no;
                        continue;
                    }
                     yes;
                    for(int i=0;i<n;i++)
                    {
                        cout<<opor[i]<<' ';
                    }
                    cout<<ln;
                    for(int i=0;i<n;i++)
                    {
                        cout<<nis[i]<<' ';
                    }
                    cout<<ln;
                
            }
        }
    }

    return 0;
}