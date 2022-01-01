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

const int N = 10000000;
vector<int> lp(N+1);
vector<int> primes;
vector<int> myprimes(N+1,0);

void seive(){
	for (int i=2; i <= N; ++i) {
	    if (lp[i] == 0) {
	        lp[i] = i;
	        primes.push_back(i);
	        myprimes[i] = 1;
	    }
	    for (int j=0; j < (int)primes.size() && primes[j] <= lp[i] && i*primes[j] <= N; ++j) {
	        lp[i * primes[j]] = primes[j];
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
// cin>>t;

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
	vector<int> mylist;
	for (int i = 2; i <= n; i++)
	{
		if(myprimes[i])
			mylist.push_back(i);
	}
	ll ans = 0;
	for (int i = 0; i < mylist.size() - 1; i++)
	{
		for(int j = i + 1; j < mylist.size(); j++){
			ll sum = mylist[i] + mylist[j];
			if(sum <= n && myprimes[sum])
				ans++;
		}
	}
	disnew(ans)
}
