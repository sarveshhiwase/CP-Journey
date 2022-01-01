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

int binarySearchIterative(int arr[],int low,int high,int k,int check){
	int mid;
	int tp = -1;
	while(low <= high){
	    mid = (low+high) / 2;
		if(arr[mid] == k){
			tp = mid;
			if(check == 1){
				low = mid + 1;
			} else {
				high = mid - 1;
			}
		} else if(arr[mid] > k){
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return tp;
}

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
	disnew(binarySearchIterative(arr,0,n-1,8,0));
}
