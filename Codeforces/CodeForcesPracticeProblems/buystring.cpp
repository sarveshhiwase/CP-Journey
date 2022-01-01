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
	ll n,co,c1,h;
	cin >> n >> co >> c1 >> h;
	string sad;
	cin >> sad;
	ll onecount = 0;
	ll zerocount = 0;
	for (int i = 0; i < n; i++)
	{
		if(sad[i] == '1')
			onecount++;
		else 
			zerocount++;
	}
	ll result1 = c1 * onecount + co * zerocount;
	ll result2;
	if(co > c1){
		result2 = h * zerocount + (zerocount+onecount) * c1;
	} else {
		result2 = h * onecount + (zerocount+onecount) * co;
	}
	cout << min(result2,result1) << endl;
}
