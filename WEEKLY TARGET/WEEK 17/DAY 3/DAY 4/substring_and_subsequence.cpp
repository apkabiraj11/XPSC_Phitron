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
	string a,b;
	cin>>a>>b;
	int n = a.size();
	int m=b.size();
	int ans = a.size()+b.size();
	for(int i=0;i<m;i++)
	{
		int idx = i;
		for(auto x : a)
		{
			if(idx==m)break;
			if(x==b[idx])idx++;
		}
		ans = min(ans,n+i+m-idx);	
	}	
	cout<<ans<<ln;

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
