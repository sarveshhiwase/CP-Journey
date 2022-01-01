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

bool check(char a,char b,char c,char d){
	int black = 0;
	int white = 0;
	if(a == '#')
		black++;
	else
		white++;
	if(b == '#')
		black++;
	else
		white++;
	if(c == '#')
		black++;
	else
		white++;
	if(d == '#')
		black++;
	else
		white++;
	return min(black,white) <= 1;
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
	vector<string> v(4,"");
	for(int i = 0; i < 4; i++)
	{
		cin >> v[i];
	}
	for(int i = 0; i <= 2; i++)
	{
		for(int j = 0; j <= 2; j++){
			if(check(v[i][j],v[i][j+1],v[i+1][j],v[i+1][j+1])){
				disnew("YES")
				return;
			}
		}
	}
	disnew("NO")
}	