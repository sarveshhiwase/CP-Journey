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
	ll n,x;
	cin >> n >> x;
	ll arr[n];
	ll total = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		total += arr[i];
	}
	if(total == x){
		cout << "NO" << "\n";
	} else {
		cout << "YES" << "\n";
		ll totalnew = 0;
		for (int i = 0; i < n; i++)
		{
			totalnew += arr[i];
			if(totalnew == x){
				if(i+1 < n){
					cout << arr[i+1] << " ";
				}
				cout << arr[i] << " ";
				i++;
			} else {
				cout << arr[i] << " ";
			}
		}

		cout << "\n";
	}
	
}
