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
	ll n;
	cin >> n;
	ll max_arr[1005] = {0};
	ll arr[n];
	ll a,b;
	for(int i = 0; i < n; i++)
	{	
		cin >> a >> b;
		if(a != b)
			max_arr[b] = 1;
		else
			max_arr[b] = -1;
		arr[i] = a;	
	}
	int c = 0;
	for(int i = 0; i < n; i++)
	{
		if(max_arr[arr[i]] == 0){
			c++;
		}	
	}
	disnew(c)
}