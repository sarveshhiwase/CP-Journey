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

//Input given is 
// 8
// 1 5 6 -13 8 9 5 6
void solve()
{
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	// Algorithm for just finding max sum subarray
	int sum = 0;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		sum = max(0,sum + arr[i]);
		ans = max(ans,sum);
	}
	// This will give me just max sum
	cout << ans << endl;
	cout << "**************************" << endl;
 	//Algorithm for finding max sum subarray with boundaries of segment which is max.
	int sum1 = 0;
	int ans1 = arr[0];
	int ansright = 0;
	int ansleft = 0;
	int minus_pos = -1;
	// Input for understanding algorithm
	//1 5 6 -13 8 9 5 6
	for (int i = 0; i < n; i++)
	{
		sum1 += arr[i];
		if(sum1 > ans1){
			ans1 = sum1;
			ansleft = minus_pos + 1;
			ansright = i;
		}
		if(sum1 < 0){
			sum1 = 0;
			minus_pos = i;
		}
	}
	cout << ans1 << endl;
	cout << "Left boundary of the segment is " << ansleft << endl;
	cout << "Right boundary of the segment is " << ansright << endl;
}
