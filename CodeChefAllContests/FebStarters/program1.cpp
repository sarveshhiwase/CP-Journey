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
	ll d,c;
	cin >> d >> c;
	ll a1,a2,a3;
	cin >> a1 >> a2 >> a3;
	ll b1,b2,b3;
	cin >> b1 >> b2 >> b3;
	ll firstday = a1 + a2 + a3;
	ll secondday = b1 + b2 + b3;

	if(firstday >= 150 && secondday >= 150){
		ll withoutcoupon = 2 * d + firstday + secondday;
		ll withcoupon = withoutcoupon - 2 * d + c;
		if(withcoupon >= withoutcoupon)
		cout << "NO" << "\n";
		else 
			cout << "YES" << "\n";
	} else if(firstday >= 150){
		ll withoutcoupon = 2 * d + firstday + secondday;
		ll withcoupon = withoutcoupon - d + c;
		// cout << withoutcoupon << " " << withcoupon << "\n";
		 if(withcoupon >= withoutcoupon)
		cout << "NO" << "\n";
		else 
			cout << "YES" << "\n";
	} else if(secondday >= 150){
		ll withoutcoupon = 2 * d + firstday + secondday;
		ll withcoupon = withoutcoupon - d + c;
		 if(withcoupon >= withoutcoupon)
		cout << "NO" << "\n";
		else 
			cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
	}
}

