#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

bool threeorsevencheck(ll n){
	while(n){
		ll x = n % 10;
		if(x != 3 && x != 7){
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
	if(threeorsevencheck(n)){
		cout << "LUCKY" << "\n";
	} else {
		cout << "BETTER LUCK NEXT TIME" << "\n";
	}
}
