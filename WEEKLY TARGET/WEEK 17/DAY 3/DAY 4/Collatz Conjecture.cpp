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
	
	ll x ,y,k;
	cin>>x>>y>>k;
	while(x>1)
	{

		ll besi = x%y;
		ll lagbe =  y-besi;
		if(lagbe<=k)
		{
			x+=lagbe;
			k-=lagbe;
		}
		else
		{
			x+=k;
			k=0;
		}
		while(x%y==0)x/=y;
		if(k<=0)break;
	}
	if(k>0){
		k=k%(y-1);
		x+=k;
		while(x%y==0)
		{
			x=x/y;
		}
		
	}
	cout<<x<<ln;
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
