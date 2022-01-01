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
	ll sum = 1;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			if(n/i == i){
				sum += i;
			} else {
				sum += n/i + i;
			}
		}
	}
	if(sum == n){
		cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
	}
}
