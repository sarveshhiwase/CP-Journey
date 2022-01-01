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

char opposite(char c){
	if(c == 'W')
		return 'B';
	return 'W';
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
	ll n,m;
	cin >> n >> m; 
	vector<vector<char>> s(n,vector<char>(m,'.'));
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++){
			cin >> s[i][j];
		}	
	}
	char c = 'W';
	for(int i = 0; i < m; i++){
		if(s[0][i] == '.'){
			s[0][i] = opposite(c);
			c = s[0][i];
		}
	}
	for(int i = 1; i < n; i++)
	{
		for(int j = 0; j < m; j++){
			if(s[i][j] == '.'){
				s[i][j] = opposite(s[i-1][j]);
				c = s[i][j];
			}
		}	
	}
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++){
			cout << s[i][j];
		}	
		disnew("")
	}
}