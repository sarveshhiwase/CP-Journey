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
	string s;
	getline(cin,s);
	string t;
	getline(cin,t);
	map<char,int> m;
	for(int i = 0; i < s.size(); i++)
	{
		if(s[i] != ' '){
			m[s[i]]++;
		}
	}
	for(auto j:t){
		if(j != ' '){
			if(m.find(j) == m.end()){
				disnew("NO")
				return;
			} else {
				if(m[j] > 0)
					m[j]--;
				else {
					disnew("NO")
					return;
				}
			}
		}
	}
	disnew("YES")
}