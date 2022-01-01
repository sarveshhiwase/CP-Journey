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
	int xtot,ytot,xper,yper,D;
	cin >> xtot >> ytot >> xper >> yper >> D;
	double xsupply = xtot / (double)xper;
	double ysupply = ytot / (double)yper;
	double sad = min(xsupply,ysupply);
	if(D <= sad){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
