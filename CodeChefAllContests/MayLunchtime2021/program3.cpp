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
cin>>t;

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
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr,arr+n,greater<int> ());
	ll tp = 0;
	//We will calculate each turn sums and then compare the max
	ll cheffirstturngift = 0;
	ll cheftwingift = 0;
	ll gifts = 0;
	while(tp < k){
		cheffirstturngift += arr[gifts++];
		cheftwingift += arr[gifts++];
		tp++;
	}
	cheftwingift += arr[gifts++];
	cout << max(cheftwingift,cheffirstturngift) << "\n";

}
