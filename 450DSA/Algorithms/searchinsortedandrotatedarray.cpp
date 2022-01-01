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

int bs(vector<int> arr,int low,int high,int k){
	int mid;
	while(low <= high){
		mid = (low+high) / 2;
		if(arr[mid] == k){
			return mid;
		} else if(arr[mid] > k){
			high = mid - 1;
		} else {
			low = mid + 1;
		}
	}
	return -1;
}

int searchsad(vector<int>& nums, int target) {
        int pivot = -1;
       	int n = nums.size();
       	for (int i = 0; i < n - 1; i++)
       	{
       		if(nums[i+1] < nums[i]){
       			pivot = i;
       			break;
       		}
       	}
       	int low,end;
       	low = 0;
       	end = pivot;
       	int first = bs(nums,low,end,target);
       	int second = bs(nums,end + 1,n - 1,target);
       	return max(first,second);
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
	vector<int> arr(n,0);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	disnew(searchsad(arr,0))
}
