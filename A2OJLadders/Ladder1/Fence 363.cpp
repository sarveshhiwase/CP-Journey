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
	ll n,k;
	cin >> n >> k;
	ll arr[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];	
	}
	ll min_height = 1e12;
	ll min_index = -1;
	ll temp_sum = 0;
	//create sliding window
	for(int i = 0; i < k; i++)
	{
		temp_sum += arr[i];
	}
	if(min_height > temp_sum){
		min_height = temp_sum;
		min_index = 1;
	}
	int f = 0;
	int p = k;
	while(p < n){
		temp_sum += arr[p++];
		temp_sum -= arr[f++];
		if(min_height > temp_sum){
			min_height = temp_sum;
			min_index = f + 1;
		}
	}
	if(min_height > temp_sum){
		min_height = temp_sum;
		min_index = f + 1;
	}
	disnew(min_index)
}