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
cin >> t;

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
	int sum = 0;
	int maxflip = 0;
	// we will count 0 as -1;
	int thiszerocount = 0;
	int thisonecount = 0;
	int ansleft = 0;
	int ansright = 0;
	int minus_pos = -1;
	for (int i = 0; i < n; i++)
	{
		if(arr[i] == 1){
			sum += arr[i];
			thisonecount++;
		} else if(arr[i] == 0) {
			sum += -1;
			ansleft = minus_pos + 1;
			ansright = i;
			thiszerocount++;
		}
		if(sum > 0){
			sum = 0;
			thiszerocount = 0;
			thisonecount = 0;
			minus_pos = i;
		}
		maxflip = max(maxflip,thiszerocount-thisonecount);
	}
	int finalans = 0;
	for (int i = 0 ; i < ansleft; i++)
	{
		if(arr[i] == 1)
			finalans++;
	}
	for(int i = ansleft; i <= ansright; i++){
		if(arr[i] == 0)
			finalans++;
	}
	for (int i = ansright + 1; i < n; i++)
	{
		if(arr[i] == 1)
			finalans++;
	}
	if(ansleft == ansright && arr[ansright] == 1){
		finalans++;
	}
	 dis(finalans)

}
