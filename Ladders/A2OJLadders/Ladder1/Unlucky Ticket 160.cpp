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
	ll n;
	cin >> n;
	string s;
	cin >> s;
	sort(s.begin(),s.begin()+n);
	sort(s.begin()+n,s.end());
	ll o,c;
	o = c = 0;
	for(int i = 0; i < n; i++)
	{
		if(s[i] < s[n + i]){
			o++;
		} else if(s[i] > s[n+i]) {
			c++;
		} else {
			disnew("NO")
			return;
		}
	}
	if(o == n || c == n){
		disnew("YES")
	} else {
		disnew("NO")
	}
}