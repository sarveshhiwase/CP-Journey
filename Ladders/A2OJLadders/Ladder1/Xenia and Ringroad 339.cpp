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
	ll arr[m];
	for(int i = 0; i < m; i++)
	{
		cin >> arr[i];	
	}
	ll time_taken = 0;
	ll curr = 1;
	for(int i = 0; i < m; i++)
	{
		if(curr > arr[i]){
			time_taken += n - curr + arr[i];
		} else {
			time_taken += arr[i] - curr;
		}
		curr = arr[i];
	}
	disnew(time_taken)
}