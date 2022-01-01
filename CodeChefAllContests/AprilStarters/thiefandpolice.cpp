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
	long long int n,m;
	cin >> n >> m;
	long long int theifx,theify;
	cin >> theifx >> theify;
	long long int policex,policey;
	cin >> policex >> policey;
	long long int theifsteps = n-theifx + m-theify;
	long long int policesteps = (n-theifx) + (m-theify) - min(n-theifx , m-theify);

	if(theifsteps  > policesteps){
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}
	// cout << theifsteps << " " << policesteps << endl;                                                                                                                                             

}
