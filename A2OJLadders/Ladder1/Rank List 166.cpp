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

bool comp(const pair<ll,ll> a,const pair<ll,ll> b){
	if(a.first < b.first) return true;
	if(a.first == b.first && a.second > b.second) return true;
	return false;
}

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
	ll n,k;
	cin >> n >> k;
	vector<pair<ll,ll>> v(n,{0,0});
	for(int i = 0; i < n; i++)
	{
		cin >> v[i].first >> v[i].second;	
	}
	sort(v.begin(),v.end(),comp);
	reverse(v.begin(), v.end());
	pair<ll,ll> res = v[k-1];
	ll teams = 0;
	for(int i = 0; i < n; i++)
	{
		if(res == v[i]){
			teams++;
		}
	}
	disnew(teams)
}	