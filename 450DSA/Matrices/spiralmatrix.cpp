#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define add insert
#define pb push_back 
#define rep(start,n) for(int i = start; i < n; i++)
#define dis(x) cout << x << " "; 
#define disnew(x) cout << x << "\n"; 
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
	// for(int i = 1; i <=25; i++){
	// 	dis(i)
	// }
	int n;
	cin >> n;
	int arr[n][n];
	// for (int i = 0; i < n; i++)
	// {
	// 	for(int j = 0; j < m; j++){
	// 		cin >> arr[i][j];
	// 	}
	// }
	int top,left,right,bottom;
	top = 0;
	right = n - 1;
	bottom = n - 1;
	left = 0;
	int k = 1;
	while(top <= bottom && left <= right){
			for(int i = top; i <= right; i++){
			 	arr[top][i] = k++;
			} 
			for(int i = top + 1 ; i <= bottom; i++){
				arr[i][right] = k++;
			}
			if(top < bottom && left < right){
				for(int i = right - 1; i > left; i--){
					arr[bottom][i] = k++;
				}
				for(int i = bottom; i > top; i--){
					arr[i][left] = k++;	
				}
			}
		top++;
		right--;
		left++;
		bottom--;
	}
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++){
			dis(arr[i][j])
		}
	disnew("")
	}
}
