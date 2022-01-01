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
	ll x1,x2,x3,R;
	cin >> x1 >> x2 >> x3 >> R;
	pair<ll,ll> range(x3-R,x3+R);
	
	if(n < 5){
		cout << z * 5 << "\n";
	} else if(n <= 10){
		cout << min(z*10,)
	}
}
