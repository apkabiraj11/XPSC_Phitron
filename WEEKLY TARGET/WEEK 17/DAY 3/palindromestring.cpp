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
	string s;
	cin>>s;
	int fast = s[0];
	string pal;
	if(fast=='9')
	{
		s="0"+s;
		for(int i=0;i<=n;i++)
		{
			pal+="1";
		}
		vector<ll> ans(n+1);
		ll baki = 0;
		for(int i=n;i>=0;i--)
		{
			ll x = pal[i]-'0';
			ll y = baki + s[i]-'0';
			if(x<y)
			{
				x+=10;
				baki = 1;		
			}
			else baki = 0;
			ans[i]=x-y;
		}
		if(ans[0]!=0)cout<<ans[0];
		for(int i=1;i<ans.size();i++)
		{
			cout<<ans[i];
		}
	}
	else 
	{
		for(int i=0;i<n;i++)
		{
			pal+="9";
		}
		vector<ll> ans(n);
		ll baki = 0;
		for(int i=n-1;i>=0;i--)
		{
			ll x = pal[i]-'0';
			ll y = baki + s[i]-'0';
			if(x<y)
			{
				x+=10;
				baki = 1;
				
			}
			else baki = 0;
			ans[i]=x-y;
		}
		if(ans[0]!=0)cout<<ans[0];
		for(int i=1;i<ans.size();i++)	 {
			cout<<ans[i];
		}
	} 

	cout<<ln;
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
