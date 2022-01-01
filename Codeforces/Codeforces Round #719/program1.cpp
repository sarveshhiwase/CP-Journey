#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
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
	int n;
	cin >> n;
	string sad;
	cin >> sad;
	unordered_set<char> bad;
	char recent = sad[0];
	bad.insert(recent);
	int flag = 0;
	for (int i = 1; i < n; i++)
	{
		if(sad[i] != recent && bad.find(sad[i]) != bad.end()){
			flag = 1;
			break;
		} else {
			bad.insert(sad[i]);
			recent = sad[i];
		}	
	}
	if (flag)
	{
		cout << "NO" << endl;
	} else {
		cout << "YES" << endl;
	}
}
