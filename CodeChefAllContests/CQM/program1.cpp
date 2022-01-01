#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

bool checkifallarenegative(ll arr[],ll n){
	for (int i = 0; i < n; i++)
	{
		if(arr[i] >= 0){
			return false;
		}
	}
	return true;
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
	if(checkifallarenegative(arr,n)){
		cout << *(max_element(arr,arr+n)) << endl;
	} else {
		ll maxsum = 0;
		ll curr = 0;
		for (int i = 0; i < n; i++)
		{
			curr += arr[i];
			if(curr > maxsum){
				maxsum += arr[i];
			} else {
				curr = maxsum;
			}
		}
		cout << maxsum << endl;
	}
	
}
