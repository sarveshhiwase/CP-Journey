#include<bits/stdc++.h>

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
cin>>t;

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	int n,m;
	cin >> n >> m;
	int x,y;
	cin >> x >> y;
	string res = "";
	for (int i = 0; i < n; i++)
	{
		string sad;
		cin >> sad;
		int fcount = 0;
		int pcount = 0;
		int ucount = 0;
		for (int j = 0; j < m; j++)
		{
			if(sad[j] == 'F'){
				fcount++;
			} else if(sad[j] == 'P'){
				pcount++;
			} else {
				ucount++;
			}
		}
		if((fcount >= x) || (fcount >= (x-1) && pcount >= y)){
			res += "1";
		} else {
			res += "0";
		}
	}
	cout << res << endl;
}
