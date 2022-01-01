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
	unordered_map<int,int> sad;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		sad[arr[i]]++;
	}
	int flag = 1;
	for(auto j:sad){
		if(j.second > 1){
			flag = 0;
			break;
		}
	}
	if(flag)
		cout << "no" << endl;
	else
		cout << "yes" << endl;

}
