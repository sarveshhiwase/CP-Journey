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
	ll count = 0;
	for (int i = 0; i < n-1; i++)
	{
		if(arr[i] == 0){
			count++;
			for(int j = i + 1; j < n; j++){
				if(arr[j] == 0)
					arr[j] = 1;
				else 
					arr[j] = 0;
			}
		}
		arr[i] = 1;
	}
	if(arr[n-1] == 0)
		count += 1;
	cout << count << "\n";
}
