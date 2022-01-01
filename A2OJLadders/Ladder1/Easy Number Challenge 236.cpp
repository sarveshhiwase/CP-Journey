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
const ll N = 1e6 + 5;
const ll m = 1073741824;
vector<ll> v(N,0);

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
	ll a,b,c;
	cin >> a >> b >> c;
	ll sum = 0;
	for(int i = 1; i <= 1000000; i++)
	{
		for(int j = i; j <= 1000000; j+=i){
			v[j]++;
		}
	}
	for(int i = 1; i <= a; i++){
		for(int j = 1; j <= b; j++){
			for(int k = 1; k <= c; k++){
				sum += v[i * j * k];
				sum %= m;
			}
		}
	}
	disnew(sum)
}