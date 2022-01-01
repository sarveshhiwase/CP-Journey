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
	ll pages;
	cin >> pages;
	ll days[7] = {0};
	for (int i = 0; i < 7; i++)
	{
		cin >> days[i];
	}
	ll sum = 0;
	while(sum < pages){
		for (int i = 0; i < 7; i++)
		{
			if(sum + days[i] >= pages){
				disnew(i+1)
				return;
			} else {
				sum += days[i];
			}
		}
	}
}