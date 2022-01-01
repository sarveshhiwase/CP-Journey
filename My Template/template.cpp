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

<<<<<<< HEAD
vector<bool> primes(250,1);

void seive(){
	primes[0] = primes[1] = 0;
	for(int i = 2; i * i <= 250; i++){
		if(primes[i])
			for(int j = i * i; j <= 1e7+4; j += i){
				primes[j] = 0;
			}
	}
}

=======
>>>>>>> 0700be2a589f0acac8596fd9016f5007a6881eb9
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

<<<<<<< HEAD
}
=======
}
>>>>>>> 0700be2a589f0acac8596fd9016f5007a6881eb9
