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
	ll n;
	cin >> n;
	ll arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];	
	}
	unordered_map<int,int> tp;
	for (int i = 0; i < n; i++)
	{
		tp[arr[i]]++;
	}
	int distinctcount = 0;
	for(auto j:tp){
		distinctcount += min(j.first - 1, j.second);
	}
	disnew(distinctcount)
	// ll n;
	// cin >> n;
	// ll arr[n];
	// for (int i = 0; i < n; i++)
	// {
	// 	cin >> arr[i];	
	// }
	// int t;
	// int minxorr = INT_MAX;
	// int thisxorr = 0;
	// int x;
	// for (int i = 0; i < n; i++)
	// {
	// 	t = arr[i];
	// 	for(int j = 0; j < n; j++){
	// 		thisxorr |= (t ^ arr[j]);
	// 	}	
	// 	if(minxorr > thisxorr){
	// 		minxorr = thisxorr;
	// 		x = t;
	// 	}
	// }
	// dis(x) dis(minxorr)
	// disnew("")
}
