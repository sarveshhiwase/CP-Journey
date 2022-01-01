#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

void nextGreatest(ll arr[], ll size)
{
     
    ll max_from_right = arr[size-1];
    for(ll i = size-2; i >= 0; i--)
    {
        ll temp = arr[i];
        if(arr[i] < max_from_right)
       		arr[i] = max_from_right;
        if(max_from_right < temp)
        max_from_right = temp;
    }
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
	nextGreatest(arr,n);
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
}
