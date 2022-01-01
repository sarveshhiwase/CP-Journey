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
	ll lines = n * 2 + 1;
	ll spacing = 2 * n;
	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j < spacing - 2 * i; j++){
			cout << " ";
		}	
		for(int k = 0; k < i; k++){
			cout << k << " ";
		}
		if(i == 0)
			cout << i;
		else
			cout << i << " ";
		for(int k = i - 1; k > 0; k--){
			cout << k << " ";
		}
		if(i - 1 >= 0) cout << 0;
		disnew("")
	}
	spacing = 2 * n;
	for(int i = n - 1; i >= 0; i--)
	{
		for(int j = 0; j < spacing - 2 * i; j++){
			cout << " ";
		}	
		for(int k = 0; k < i; k++){
			cout << k << " ";
		}
		if(i == 0)
			cout << i;
		else
			cout << i << " ";
		for(int k = i - 1; k > 0; k--){
			cout << k << " ";
		}
		if(i - 1 >= 0) cout << 0;
		disnew("")
	}
}