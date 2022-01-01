//Problem url 
 //https://codeforces.com/problemset/problem/919/B
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

bool isperfect(int n){
	int sum = 0;
	while(n){
		sum += (n % 10);
		n /= 10;
	}
	return sum == 10;
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
	ll k;
	cin >> k;
	int i = 10;
	while(k){
		if(isperfect(i)){
			k--;
		}
		if(k == 0) break;
		i += 9;
	}
	disnew(i)
}