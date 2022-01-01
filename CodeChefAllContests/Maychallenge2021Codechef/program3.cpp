#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

ll modpow(ll base, ll exp, ll modulus) {
  base %= modulus;
  ll result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}

ll powiterative(ll a , ll n){
	ll ans = 1;
	while(n > 0){
		if(n & 1){
			ans = ((ans % mod) * (a % mod)) % mod;
		}
		n /= 2;
		a = ((a % mod) * (a % mod)) % mod;
	}
	return ans;
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
	int n;
	cin >> n;
	ll nthpower = modpow(2,n-1,mod);
	// for (int i = 0; i < nthpower; i++)
	// {
	// 	if((i ^ (i+1)) == ((i+2) ^ (i+3))){
	// 		cout << i << endl;
	// 	}
	// }
	ll nthpower2 = powiterative(2,n-1);

	cout << nthpower << endl;
	cout << nthpower2  << endl;
	cout << "************" << endl;

}
