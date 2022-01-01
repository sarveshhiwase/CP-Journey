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
	ll n,m;
	cin >> n >> m;
	vector<string> strs(n);
	for (int i = 0; i < n; i++)
	{
		cin >> strs[i];	
	}
	vector<pair<int,string>> tp;
	ll sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = 0;
		for(int j = 0; j < m; j++){
			sum += strs[i][j] - '0';
		}
		tp.push_back({sum,strs[i]});
	}
	sort(tp.begin(), tp.end());
	string big = "";
	for(auto j:tp){
		big += j.second;
	}
	ll zeroes;
	zeroes =  0;
	ll inversions = 0;
	for (int i = big.size() - 1;i >= 0; i--)
	{
		if(big[i] == '0'){
			zeroes++;
		} else {
			inversions += zeroes;
		}
	}
	disnew(inversions)
}
