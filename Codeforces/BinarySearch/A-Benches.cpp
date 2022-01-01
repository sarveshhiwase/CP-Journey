//Problem url 
 //https://codeforces.com/problemset/problem/1042/A
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
	ll sum = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	ll ans2 = *max_element(arr,arr+n) + m;
	for (int i = 0; i < m; i++)
	{
		arr[min_element(arr,arr+n) - arr]++;
	}
	ll ans1 = *max_element(arr,arr+n);
	dis(ans1) disnew(ans2)
}