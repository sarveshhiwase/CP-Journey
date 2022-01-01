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

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	ll n,q;
	cin >> n >> q;
	vector<ll> roots(n,0);
	for (int i = 0; i < n; i++)
	{
		cin >> roots[i];
	}
	sort(roots.begin(),roots.end());
	while(q--){
		ll xi;
		cin >> xi;
		ll negativecount = 0;
		bool iszero = false;
		// search for the lower bound of xi in roots sorted array
		auto sad = lower_bound(roots.begin(),roots.end(),xi);
		ll bad = sad - roots.begin();
		if((*sad) == xi){
			iszero = true;
		} else {
			negativecount = n - bad;
		}
		if(iszero){
			disnew(0)
		} else {
			if(negativecount & 1)
				disnew("NEGATIVE")
			else
				disnew("POSITIVE")
		}
	}
}
