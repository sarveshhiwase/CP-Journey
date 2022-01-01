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
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int flag = 1;
	for (int i = 0; i < n; i++)
	{
		int sqrroot = sqrt(arr[i]);
		if(sqrroot * sqrroot != arr[i]){
			flag = 0;
			break;
		}
	}
	if(flag)
		cout << "NO" << endl;
	else
		cout << "YES" << endl;
}
