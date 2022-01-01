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
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	vector<ll> candies(n,1);
	for (int i = 1; i < n; i++)
	{
		if(arr[i] > arr[i-1]){
			candies[i] = candies[i - 1] + 1;
		} 
	}
	for (int i = n-1; i > 0; i--)
	{
		if(arr[i] < arr[i-1]){
			candies[i-1] = max(candies[i-1],candies[i]+1);
		}
	}
	// ll last = 0;
	// for (int i = 1; i < n; i++)
	// {
	// 	if(arr[i] > arr[last]){
	// 		candies[i] = candies[last] + 1;
	// 	} else if(arr[i] < arr[last]) {
	// 		if(candies[last] == candies[i]){
	// 			candies[last]++;
	// 		}
	// 	}
	// 	last = i;
	// }
	ll mincandies = 0;
	for (int i = 0; i < n; i++)
	{
		cout << candies[i] << "\n";
		mincandies += candies[i];
	}
	cout << mincandies << "\n";
}
