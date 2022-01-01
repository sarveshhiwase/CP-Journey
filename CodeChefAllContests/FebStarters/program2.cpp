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
	ll s;
	cin >> s;
	ll introsduration[s];
	for (int i = 0; i < s; i++)
	{
		cin >> introsduration[i];
	}
	ll totalduration = 0;
	for (int i = 0; i < s; i++)
	{
		ll episodes;
		cin >> episodes;
		int k = 0;
		while(k < episodes){
			ll episodesduration;
			cin >> episodesduration;
			if(k == 0){
				totalduration += episodesduration ;
			} else {
				totalduration += episodesduration - introsduration[i];
			}
			k++;
		}
	}
	cout << totalduration << "\n";
}
