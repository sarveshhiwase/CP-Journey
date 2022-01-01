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
	ll k;
	cin >> k;
	if(k == 0){
		disnew("0")
		return;
	}
	ll sum = 0;
	ll arr[12];
	for (int i = 0; i < 12; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}
	if(sum < k){
		disnew("-1")
	} else {
		sort(arr,arr+12,greater<int>());
		ll months = 0;
		ll t = 0;
		for (int i = 0; i < 12; i++)
		{
			if(arr[i] + t >= k) {
				months++;
				break;
			}
			else {
				t += arr[i];
				months++;
			}
		}
		disnew(months)
	}
}

