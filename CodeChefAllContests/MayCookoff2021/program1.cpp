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
		ll D,d,a,b,c;
		cin >> D >> d >> a >> b >> c;
		ll res = D * d;
		if(res >= 42){
			cout << c << "\n";
		} else if(res >= 21){
			cout << b << "\n";
		} else if(res >= 10){
			cout << a << "\n";
		} else {
			cout << 0 << "\n";
		}
}
