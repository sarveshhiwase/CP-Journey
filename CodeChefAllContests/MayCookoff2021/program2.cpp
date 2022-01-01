#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

ll myceil(ll n,ll d){
	return (n / d) + (n % d != 0);
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
	ll g,p;
	cin >> g >> p;
	ll arr[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> arr[i];
	}
	ll beforechef = 0;
	for (int i = g; i < 10; i++)
	{
		beforechef += arr[i];
	}
	cout << myceil(beforechef + 1,p) << " " << myceil(beforechef + arr[g-1],p) << "\n";
}
