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
	ll a,b,c,d,k;
	cin >> a >> b >> c >> d >> k;
	ll totalsteps = abs(c - a) + abs(d-b);
	if(totalsteps <= k && ((k - totalsteps) == 0 || (k - totalsteps) % 2 == 0)) {
		cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
	}
}
