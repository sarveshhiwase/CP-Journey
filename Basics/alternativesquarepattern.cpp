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
/*cin>>t;*/

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
	int start = 0;
	int limit = n * 5;
	for (int i = 1; i <= n; i++)
	{
		if(i % 2 == 0){
			for (int j = start+5; j > start; j--)
			{
				cout << j << " ";
			}
		} else {
			for (int k = start+1; k <= start+5; k++)
			{
				cout << k << " ";
			}
		}

		start += 5;
		cout << "\n";
	}
}
