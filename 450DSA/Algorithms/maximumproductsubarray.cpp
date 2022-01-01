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
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{ 
		cin >> arr[i]; 
	}
	int maxprod = 0;
	int res = 1;
	for (int i = 0; i < n; i++)
	{
		res *= arr[i];
		if(res > maxprod)
			maxprod = res;
		if (res == 0)
		{
			res = 1;
		}
	}
	cout << maxprod << endl;
}
