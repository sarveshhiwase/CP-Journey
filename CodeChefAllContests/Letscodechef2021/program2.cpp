#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

ll highestPowerof2(ll n)
{
   ll p = (ll)log2(n);
   return (ll)pow(2, p);
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
 	ll x;
 	cin >> x;
	ll rasgullas = 0;
	while(x > 1){
	    x -= highestPowerof2(x);
	    rasgullas++; 
	}
	rasgullas += x;
	cout << rasgullas << endl;
}
