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

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	int m,n;
	cin >> m >> n;
	vector<vector<int>> mat(m,vector<int>(n,0));
	for (int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++){
			cin >> mat[i][j];
		}
	}

	bool iscol = false;

	for (int i = 0; i < m; i++)
	{
		if(mat[i][0] == 0){
			iscol = true;
		}
		for(int j = 1; j < n; j++){
			if(mat[i][j] == 0){
				mat[i][0] = 0;
				mat[0][j] = 0;
			}
		}
	}

	for (int i = 1; i < m; i++)
	{
		for(int j = 1; j < n; j++){
			if(mat[i][0] == 0 || mat[0][j] == 0){
				mat[i][j] = 0;
			}
		}
	}
	// set first row and col also to zeroes
	if(mat[0][0] == 0){
		for(int j = 0; j < n; j++){
			mat[0][j] = 0;
		}
	}
	if(iscol){
		for(int j = 0; j < m; j++){
			mat[j][0] = 0;
		}
	}
	for (int i = 0; i < m; i++)
	{
		for(int j = 0; j < n; j++){
			dis(mat[i][j])
		}
		disnew("")
	}
	int x = 0;
	int y = 0;
	for (int i = 0; i < 5; i++)
	{
		if(++x > 2 || ++y > 2){
			x++;
		}
	}
	disnew(x)
	disnew(y)
}
