#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;
const int N = 1e7 + 2;

vector<bool> prime(N+1,true);
vector<ll> prefix_count(N+1,0);

void seive(){
	prime[0] = prime[1]= false;
	for (int i = 2; i * i <= N; i++)
	{
		if(prime[i]){
			for(int j = i * i; j <= N; j+=i)
				prime[j] = false;
		}
	}
}

void precomputecount(){
	ll count = 0;
	for (int i = 1; i <= N; i++)
	{
		if(prime[i])
			count++;
		prefix_count[i] = count;
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
precomputecount();

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
	ll n;
	cin >> n;
	if(n == 2)
		cout << 1 << "\n";
	else if(n == 3){
		cout << 2 << "\n";
	} else {
		ll mid = n / 2;
		ll ans = 1 + prefix_count[n] - prefix_count[mid];
		cout << ans << "\n";
	}
}
