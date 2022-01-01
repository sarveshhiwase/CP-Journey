//Problem Link - https://www.codechef.com/problems/BIGSALE
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
	double arr[n][3];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
	}
	double overallloss = 0;
	for (int i = 0; i < n; i++)
	{
		double loss = arr[i][1] * (arr[i][0] * ((arr[i][2]/100) * (arr[i][2]/100)));
		overallloss += loss;
	}
	//Precision for decimal points in c++
	//normally it would round or truncate upto 2 decimal points
	cout << fixed << setprecision(8) << overallloss << endl;
}
