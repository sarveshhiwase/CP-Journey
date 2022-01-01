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

vector<vector<int>> lights;
vector<vector<int>> buttons;

void setter(int i,int j){
	lights[i][j] = !lights[i][j];
	if(i+1 < 3)
		lights[i+1][j] = !lights[i+1][j];
	if(i - 1 >= 0)
		lights[i-1][j] = !lights[i-1][j];
	if(j - 1 >= 0)
		lights[i][j-1] = !lights[i][j-1];
	if(j + 1 < 3)
		lights[i][j+1] = !lights[i][j+1];

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
	lights.resize(3,vector<int>(3,1));
	buttons.resize(3,vector<int>(3,0));
	for (int i = 0; i < 3; i++)
	{	
		for(int j = 0; j < 3; j++){
			cin >> buttons[i][j];
		}
	}
	for (int i = 0; i < 3; i++)
	{	
		for(int j = 0; j < 3; j++){
			if(buttons[i][j] & 1){
				setter(i , j);
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{	
		for(int j = 0; j < 3; j++){
			cout << lights[i][j];
		}
		disnew("")
	}
}