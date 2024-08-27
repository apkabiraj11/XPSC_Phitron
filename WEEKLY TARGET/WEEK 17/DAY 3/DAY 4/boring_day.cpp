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
	ll n,l,r;
	cin>>n>>l>>r;
	vector<ll>ar;
	ll mxsum = 0;
	for(int i=0;i<n;i++)
	{
		ll x;
		cin>>x;
		mxsum+=x;
		ar.push_back(x);
	}
	if(mxsum<l)
	{
		cout<<0<<ln;
		return;
	}
	int i=0,j=0;
	ll sum = 0;
	int cnt = 0;
	while(j<n)
	{	
		sum+=ar[j];
		if(sum>=l && sum<=r)
		{
			cnt++;
			i=j+1;
			sum = 0;
		}
		else if(sum>r)
		{
			while(sum>r)
			{
				sum-=ar[i];
				i++;
			}
			if(sum>=l && sum<=r)
			{
				cnt++;
				i=j+1;
				sum = 0;
			}
			
		}
		j++;
	}
	cout<<cnt<<ln;

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