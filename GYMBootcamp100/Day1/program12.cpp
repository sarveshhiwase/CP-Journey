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
	int flag = 0;
	int left,right;
	left = right = 0;
	for (int i = 0; i < n - 1; i++)
	{
		if(arr[i+1] < arr[i]){
			if(!flag){
				left = i + 1;
				flag = 1;
			} 
		} else if(flag == 1 && arr[i+1] > arr[i]){
			right = i + 1;
			flag = 2;
		}
	}
	if(flag == 1){
		right = n;
	}
	bool check = true;
	int i = left - 1;
	int j = right - 1;
	while(i < j){
		swap(arr[i++],arr[j--]);
	}
	for (int i = 0; i < n - 1; i++)
	{
		if(arr[i] > arr[i+1]){
			check = false;
			break;
		}
	}
	if(!left){
		left = right = 1;
	}
	if(check){
		disnew("yes")
		dis(left) disnew(right)
	} else {
		disnew("no")
	}
}
