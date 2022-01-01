#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll findlcm(ll arr[], ll n)
{
    ll ans = arr[0];
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}

bool checkifallareone(ll arr[],ll n){
	for (int i = 0; i < n; i++)
	{
		if(arr[i] != 1)
			return false;
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
	ll ans = 0;
	if(checkifallareone(arr,n)){
		cout << k << "\n";
	} else {
		ll count = 0;
		ll ans = findlcm(arr,n);
		for (int i = ans; i <= k; i+=ans)
		{
			count++;
		}
		cout << count << "\n";
	}

}
