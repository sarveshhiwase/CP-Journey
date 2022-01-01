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

ll sumofn(ll n){
	return (n * (n + 1)) / 2;
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
	ll arr[n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];	
	}
	sort(arr,arr+n);
	dis(arr[n-1] - arr[0])
	ll min_count,max_count;
	min_count = max_count = 0;
	for(int i = 0; i < n; i++)
	{
		if(arr[i] == arr[0]){
			min_count++;
		}	
	}
	for(int i = n - 1; i >= 0; i--){
		if(arr[i] == arr[n-1]){
			max_count++;
		}
	}
	if(arr[n-1] == arr[0]){
		disnew(sumofn(n-1))
		return;
	}
	disnew(min_count * max_count)
}