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

vector<int> row;
vector<int> column;


bool checkboard(int n,int x,int y){
	int xc = x;
	int yc = y;
	// row checking
	if(row[xc] == 1) return false;

	// column checking
	if(column[yc] == 1) return false;

	//diagonal checking
	for (int i = 1; i <= n; i++)
	{
		if(((xc + yc) - i) >= 0 && row[i] == 1 && column[(xc + yc) - i] == 1) {
			if(xc == 1 && yc == 3){
				disnew("up")
				disnew(i)
			}
			return false;
		}	
	}
	for (int i = 1; i <= n; i++)
	{ 
		if((i - abs(xc - yc)) >= 0 && row[i] == 1 && column[i - abs(xc - yc)] == 1){
			if(xc == 1 && yc == 3){
				disnew("down")
				disnew(i)
			}
		 	return false;
		}	
	}
	// for (int i = 0; i < n; i++)
	// {
	// 	for(int j = 0; j < n; j++){
	// 		if(((i + j) == (row + col)) && board[i][j] == 1){
	// 			return false;
	// 		}
	// 	}
	// }
	// for (int i = 0; i < n; i++)
	// {
	// 	for(int j = 0; j < n; j++){
	// 		if(((i - j) == (row - col)) && board[i][j] == 1){
	// 			return false;
	// 		}
	// 	}
	// }
	row[xc] = 1;
	column[yc] = 1;
	return true;
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
	ll n,q;
	cin >> n >> q;
	row.resize(n+1,0);
	column.resize(n+1,0);
	ll cordinatex,cordinatey;
	for (int i = 0; i < q; i++)
	{
		cin >> cordinatex >> cordinatey;
		if(checkboard(n,cordinatex,cordinatey))
			disnew("YES")
		else
			disnew("NO")
	}
}
