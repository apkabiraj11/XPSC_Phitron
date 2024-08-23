#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long int
#define ln '\n'
#define yes cout << "YES" << ln
#define no cout << "NO" << ln

void solve()
{
	int n;
	cin>>n;
	vector<ll>ar;
	for(int i=0;i<n-1;i++)
	{
		ll x;
		cin>>x;
		ar.push_back(x);
	}
	ll mxsum = n*(n+1)/2;
	if(ar.back()>mxsum)
	{
		no;
		return ;
	}
	else if(ar.back()<mxsum)
	{
		ar.push_back(mxsum);
		set<int>st;
		for(int i=n-1;i>0;i--)
		{
			int dif = ar[i]-ar[i-1];
			if(dif<=n)
				st.insert(dif);
		}
		st.insert(ar[0]);
		if(st.size()==n)
		{
			yes;
		}
		else no;
	}
	else
	{
		set<ll>st,store;
		if(ar[0]<=n)
			st.insert(ar[0]);
		store.insert(ar[0]);
		for(int i=n-2;i>0;i--)
		{
			int dif = ar[i]-ar[i-1];
			store.insert(dif);
			if(dif<=n)
				st.insert(dif);
		}
		vector<ll>miss;
		for(int i=1;i<=n;i++)
		{
			auto it = st.find(i);
			if(it==st.end())
				miss.push_back(i);
		}
		if(miss.size()!=2)
		{
			no;
			return;
		}
		ll sum = miss[0]+miss[1];

		auto it = store.find(sum);

		if(it!=store.end())
			yes;
		else no;
	}
	

}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t=1;
	cin>>t;
	while(t--)
	{
		solve();
	}

	return 0;
}
