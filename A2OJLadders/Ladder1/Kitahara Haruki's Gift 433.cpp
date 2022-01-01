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
	ll n;
	cin >> n;
	ll arr[n];
	ll weight = 0;
	ll hundreds,two_hundreds;
	hundreds = two_hundreds = 0;
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if(arr[i] == 200){
			two_hundreds++;
		} else {
			hundreds++;
		}
		weight += arr[i];	
	}
	weight /= 2;
	ll first = ((two_hundreds >= weight / 200) || (hundreds >= weight / 100)) ? 0 : 1;
	if(first){
		disnew("NO")
		return;
	}
	two_hundreds = (two_hundreds - (weight / 200)) >= 0 ? (two_hundreds - (weight / 200)) : 0;
	hundreds = (hundreds - (weight / 100)) >= 0 ? (hundreds - (weight / 100)): 0;
	if(two_hundreds * 200 + hundreds * 100 == weight){
		disnew("YES")
	} else {
		disnew("NO")
	}
}