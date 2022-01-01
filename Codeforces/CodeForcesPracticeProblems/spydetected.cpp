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
	unordered_map<int,int> sad;
	for (int i = 0; i < n; i++)
	{
		sad[arr[i]]++;
	}
	int spy = 0;
	for(auto j:sad){
		if(j.second == 1){
			spy = j.first;
			break;
		}
	}
	int spyindex = 0;
	for (int i = 0; i < n; i++)
	{
		if(arr[i] == spy){
			spyindex = i;
			break;
		}
	}
	cout << spyindex + 1<< endl;
}
