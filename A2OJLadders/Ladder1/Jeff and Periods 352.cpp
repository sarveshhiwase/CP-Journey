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
	ll arr[n];
	map<int,vector<int>> m;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];	
		m[arr[i]].push_back(i);
	}
	vector<pair<int,int>> validpairs;
	ll diff = 0;
	bool flag = true;
	for(auto j:m){
		if(j.second.size() >= 2){
			diff = j.second[1]-j.second[0];
			for(int i = 2; i < j.second.size(); i++)
			{
				if(j.second[i] - j.second[i-1] != diff) flag = false;
			}
			if(flag){
				validpairs.push_back({j.first,diff});
			}
		} else {
			validpairs.push_back({j.first,0});
		}
		flag = true;
	}
	disnew(validpairs.size())
	for(auto j:validpairs){
		dis(j.first) disnew(j.second)
	}
}