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

#ifndef sarveshhiwase07
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
	ll arr[2 * n];
	map<int,vector<int>> m;
	for(int i = 0; i < 2 * n; i++)
	{
		cin >> arr[i];
		m[arr[i]].push_back(i+1);	
	}
	bool flag = false;
	vector<pair<int,int>> res;
	for(auto j:m){
		if(j.second.size() % 2 != 0){
			flag = true;
		} else {
			for(int i = 0; i < j.second.size(); i+=2)
			{
				res.push_back({j.second[i],j.second[i+1]});
			}
		}
	}
	if(flag){
		disnew(-1)
		return;
	}
	for(int i = 0; i < res.size(); i++)
	{
		dis(res[i].first) disnew(res[i].second)
	}
}