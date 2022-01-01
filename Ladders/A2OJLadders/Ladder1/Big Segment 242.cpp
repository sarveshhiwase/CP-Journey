#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define add insert
#define pb push_back 
#define rep(start,n) for(int i = start; i < n; i++)
#define dis(x) cout << x << " "; 
#define disnew(x) cout << x << "\n"; 
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
//cin>>t;

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	ll n;
	cin >> n;
	vector<pair<ll,ll>> v(n,{0,0});
	ll min_e = 1e12;
	ll max_e = -1;
	for(int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;	
		min_e = min(min_e,v[i].first);
		max_e = max(max_e,v[i].second);
	}
	int pos = -1;
	for(int i = 0; i < n; i++)
	{
		if(v[i].first <= min_e && v[i].second >= max_e){
			pos = i + 1;
			break;
		}	
	}
	disnew(pos)
}