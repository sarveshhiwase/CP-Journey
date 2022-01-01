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
	int n;
	cin >> n;
	vector<int> dp(n+1,0);
	disnew(n)
	// for (int i = 2; i <= n; i++)
	// {
	// 	dp[i] += dp[i-1];
	// 	if(i & 1){
	// 		dp[i] += (i-1)/2 + 1;
	// 	} else {
	// 		dp[i] += (i)/2;
	// 	}
	// }
	int c = 0;
	for (int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++){
			for(int k = 1; k <= n; k++){
				if((i % j) == k && (j % k) == 0){
					dis(i) dis(j) dis(k)
					c++;
					disnew("")
				}
			}
		}
	}
	disnew(c)
	// disnew(dp[n])
	disnew("-----------")
}
