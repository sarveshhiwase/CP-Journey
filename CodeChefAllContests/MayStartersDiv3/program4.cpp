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
	ll n,k,f;
	cin >> n >> k >> f;
	vector<pair<ll,ll>> invilgators;
	for (int i = 0; i < n; i++)
		{
			ll s,e;
			cin >> s >> e;
			invilgators.push_back({s,e});
		}	
	sort(invilgators.begin(),invilgators.end());
	ll max_end = invilgators[0].second;
	ll ans = 0;
	for (int i = 1; i < n; i++)
	{
		ans += max((ll)0, invilgators[i].first - max_end);
		max_end = max(max_end,invilgators[i].second);
	}
	//The start time if possible and last time if possible
	ans += invilgators[0].first;
	ans += f - max_end;
	if(ans >= k){
		cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
	}
}
