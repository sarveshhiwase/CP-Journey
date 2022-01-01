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
	vector<ll> modulosofsad(n+1,1);
	ll respairs = 0;
	for (int i = 2; i <= n; i++)
	{
		ll bad = m % i;
		respairs += modulosofsad[bad];
		for (int j = bad; j <= n; j+=i)
		{
			modulosofsad[j]++;
		}
	}
	cout << respairs << endl;
}
