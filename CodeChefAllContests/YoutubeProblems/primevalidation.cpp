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
	if(n == 2){
		cout << 1 << "\n";
	} else if(n == 1){
		cout << 0 << "\n";
	} else {
		bool prime = true;
		for(int i = 2; i <= sqrt(n); i++){
			if(n % i == 0){
				prime = false;
				break;
			}
		}
		if(prime)
			cout << 1 << "\n";
		else
			cout << 0 << "\n";
	}
}
