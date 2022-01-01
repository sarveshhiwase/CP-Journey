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
	ll arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];	
	}
	ll last_child = -1;
	ll max_element = -1;
	for (int i = 0; i < n; i++)
	{
		if(ceil((double)arr[i] / m) >= max_element){
			max_element = ceil((double)arr[i] / m);
			last_child = i+1;
		}
	}
	disnew(last_child)
}