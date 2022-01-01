#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

void solve();

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("error.txt", "w", stderr);
freopen("output.txt", "w", stdout);
#endif

int t=1;
cin>>t;

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	ll n,k;
	cin >> n >> k;
	ll arr[n];
	unordered_map<ll,ll> sad[k];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sad[i%k][arr[i]]++;
	}
	ll ans = 0;
	for (int i = 0; i < k;i++)
	{
		ll elements = 0,maxx = -1;
		for(auto k: sad[i]){
			elements += k.second;
			maxx = max(maxx,k.second);
		}
		ans += elements - maxx;
	}
	cout << ans << "\n";

}
