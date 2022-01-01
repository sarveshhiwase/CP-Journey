#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);  
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
	ll k;
	cin >> k;
	vector<ll> sad;
	for (int i = 1; i <= 2*k+1; i++)
	{
		ll tp = k+(ll)pow(i,2);
		// cout << tp << endl;
		sad.push_back(tp);
	}
	// cout << "***************" << endl;
	ll sum = 0;
	for (ll i = 0; i < sad.size()-1; i++)
	{
		ll bad = gcd(sad[i],sad[i+1]);
		// cout << bad << endl;
		sum += bad;
	}
	// cout << "***************" << endl;
	cout << sum  << endl;
	cout << "end of this" << endl;
}
