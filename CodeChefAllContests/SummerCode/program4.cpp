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
	ll n,m;
	cin >> n >> m;
	ll arr1[n];
	ll arr2[m];
	unordered_map<int,int> sad1;
	unordered_map<int,int> sad2;
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
		sad1[arr1[i]]++;
	}
	for (int i = 0; i < m; i++)
	{
		cin >> arr2[i];
		sad2[arr2[i]]++;
	}
	vector<int> newv;
	for(auto j:sad1){
		if(j.second == 1){
			auto it = sad2.find(j.first);
			if(it != sad2.end() && (it->second) ==  j.second && j.first % 3 == 0){
				newv.push_back(j.first);
			}
		}
	}
	if(newv.size() == 0){
		cout << -1 << "\n";
	} else {
		sort(newv.begin(),newv.end());
		for (int i = 0; i < newv.size(); i++)
		{
			cout << newv[i] << " ";
		} 
		cout << "\n";
	}
}
