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

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	int n,x;
	cin >> n >> x;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		sum += x;
	}
	if(sum + x <= 24){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
