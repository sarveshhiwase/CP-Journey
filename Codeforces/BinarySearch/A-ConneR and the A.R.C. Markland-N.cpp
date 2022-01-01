//Problem url 
 //https://codeforces.com/problemset/problem/1293/A
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
	ll n,s,k;
	cin >> n >> s >> k;
	map<int,int> m;
	ll x;
	for (int i = 0; i < k; i++)
	{
		cin >> x;
		m[x]++;
	}
	ll i,j;
	ll ans = 0;
	for(i = s,j = s; i >= 1 || j <= n; i--,j++){
		if(i >= 1 && m.find(i) == m.end()){
			ans = abs(s - i);
			break;
		} else if(j <= n && m.find(j) == m.end()){
			ans = abs(s - j);
			break;
		}
	}
	disnew(ans)
}