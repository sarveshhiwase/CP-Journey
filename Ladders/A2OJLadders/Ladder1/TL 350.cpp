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
	ll n,m;
	cin >> n >> m;
	ll right[n],wrong[m];
	for(int i = 0; i < n; i++)
	{
		cin >> right[i];	
	}
	for(int i = 0; i < m; i++)
	{
		cin >> wrong[i];
	}
	sort(right,right + n);
	sort(wrong,wrong + m);
	int max_v = wrong[0] - 1;
	if(right[0] * 2 <= max_v && right[n-1] <= max_v){
		disnew(max(right[n-1],right[0]*2))
	} else {
		disnew(-1)
	}
}	