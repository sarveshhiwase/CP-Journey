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
	ll k,l,m,n,d;
	cin >> k >> l >> m >> n >> d;
	if(k == 1 || l == 1 || m == 1 || n == 1){
		disnew(d)
		return;
	}
	vector<int> dragons(d+1,1);
	int counter = 0;
	for (int i = k; i <= d; i+=k)
	{
		dragons[i] = 0;
		counter++;
	}
	for (int i = l; i <= d; i+=l)
	{
		if(dragons[i]){
			dragons[i] = 0;
			counter++;
		}
	}
	for (int i = m; i <= d; i+=m)
	{
		if(dragons[i]){
			dragons[i] = 0;
			counter++;
		}
	}
	for (int i = n; i <= d; i+=n)
	{
		if(dragons[i]){
			dragons[i] = 0;
			counter++;
		}
	}
	disnew(counter)
}
