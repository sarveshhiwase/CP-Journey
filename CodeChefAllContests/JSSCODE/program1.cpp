#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

ll factorial(ll n){
	ll res = 1;
	for (int i = 2; i <= n; i++)
	{
		res = (res * i) % mod;
	}
	return res;
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

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	ll x,y;
	cin >> x >> y;
	ll ans = ((factorial(x) % mod) * (factorial(y) % mod)) % mod;
	if(x == y){
		ans = (ans * 2) % mod; 
	}
	cout << ans << "\n";
}
