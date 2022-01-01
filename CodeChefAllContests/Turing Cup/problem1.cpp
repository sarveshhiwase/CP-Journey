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
	//m = no. of steps k = no. of collectibles with there positions
	long long int k,m;
	cin >> k >> m;
	long long int arr[k][2];
	long long int xin = 0, yin = 0;
	//Getting x,y cordinates as input;
	for (long long int i = 0; i < k; i++)
	{
		long long int tempcollectx;
		cin >> tempcollectx;
		arr[i][0] = tempcollectx;
	}
	for (long long int i = 0; i < k; i++)
	{
		long long int tempcollecty;
		cin >> tempcollecty;
		arr[i][1] = tempcollecty;
	}
	long long int distance = 0;
	for(long long int i = 0; i < k; i++){
		distance += abs(arr[i][0] - xin) + abs(arr[i][1] - yin);
		xin = arr[i][0];
		yin = arr[i][1];
	}
	if(distance < m){
		cout << "YES" << endl;
	} else {
		cout << "NO" << endl;
	}
}
