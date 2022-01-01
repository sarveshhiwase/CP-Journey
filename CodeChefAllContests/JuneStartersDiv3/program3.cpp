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
	ll n;
	cin >> n;
	unordered_map<string,int> res;
	for (int i = 0; i < 3 * n; i++)
	{
		string in;
		ll x;
		cin >> in >> x;
		res[in] += x;
	}
	vector<ll> final;
	for(auto j:res){
		final.push_back(j.second);
	}
	sort(final.begin(),final.end());
	for (int i = 0; i < final.size(); i++)
	{
		dis(final[i])
	}
	disnew("")
}
