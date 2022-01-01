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
	ll D,d,P,Q;
	cin >> D >> d >> P >> Q;
	//find out how many possible days are of d;
	ll total = 0;
	ll days = D / d;
	ll remain = D % d;
	total += ((days) * (2 * P + (days - 1) * (Q))) / 2;
	total *= d;
	ll lastdiff = P + (days) * Q;
	// cout << total << "\n";                                                                                                                                                                   
	total += remain * lastdiff;
	cout << total << "\n";
	// cout << "**********" << "\n";
}
