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
const ll N = 1e7 + 5;
vector<bool> primes(N,1);

void seive(){
	primes[0] = primes[1] = 0;
	for(int i = 2; i * i <= N; i++)
	{
		if(primes[i]){
			for(int j = i * i; j <= N; j+=i){
				primes[j] = 0;
			}
		}
	}
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

seive();
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
	ll n;
	cin >> n;
	n--;
	dis(2)
	for(int i = 3; i <= N && n; i+=2)
	{
		if(primes[i]){
			dis(i)
			n--;
		}
	}
}