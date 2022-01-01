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

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	int arr[5] = {3,1,2,1,1};
	int steps = 0;
	for (int i = 0; i < 5; i++)
	{
		if(arr[i] == 0){
			cout << -1 << "\n";
			break;
		}
		if(i + arr[i] >= 4){
			steps++;
			break;
		}
		int maxjumps = -1;
		int maxindex = -1;
		for(int j = i + 1; j <= (i + arr[i]); j++){
			if(arr[j] >= maxjumps){
				maxindex = j;
				maxjumps = arr[j];
			}
		}
		int tp = 0;
		if(maxjumps == -1 && maxindex == -1){
			for(int j = i + 1; j <= (i + arr[i]); j++){
				if(arr[j] >= tp){
					maxindex = j;
					tp = arr[j];
				}
			}
		}
		// cout << maxjumps << " " << maxindex << "\n";
		steps++;
		i = maxindex - 1;
	}
	cout << steps << "\n";
}
