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

bool isLucky(ll n){
	if(n == 0)
		return false;
	ll x;
	while(n){
		x = n % 10;
		if(x != 4 && x != 7){
			return false;
		}
		n /= 10;
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
	ll x;
	ll luckydigits = 0;
	while(n){
		x = n % 10;
		if(x == 4 || x == 7){
			luckydigits++;
		} 
		n /= 10;
	}
	if(isLucky(luckydigits)){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}