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

int t=1;
//cin>>t;

while(t--)
{
	solve();
}

return 0;
}

void solve()
{
	string s;
	cin >> s;
	map<char,int> m;
	int len = s.size();
	for(int i = 0; i < len; i++){
		m[s[i]]++;
	}
	ll even,odd;
	even = odd = 0;
	for(auto j:m){
		if((j.second & 1)){
			odd++;
		} else {
			even++;
		}
	}
	if(odd & 1 || !odd){
		disnew("First")
	} else {
		disnew("Second")
	}
}