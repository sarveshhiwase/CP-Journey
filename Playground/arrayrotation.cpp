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

void rotate(int arr[],int n,int k){
	int arr2[n];
	for (int i = 0; i < n; i++)
	{
		if(i - k < 0){
			arr2[i-k+n] = arr[i];
		} else {
			arr2[i-k] = arr[i];
		}
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = arr2[i];	
	}
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
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];	
	}
	int b[n];
	for (int i = 0; i < n; i++)
	{
		cin >> b[i];	
	}

	int first = a[0];
	int minindex = -1;
	int minmod = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if(minmod > ((first + b[i]) % n)){
			minmod = ((first + b[i]) % n);
			minindex = i;
		}
	}
	rotate(b,n,minindex);
	for (int i = 0; i < n; i++)
	{
		dis(b[i])	
	}
	disnew("")
	for (int i = 0; i < n; i++)
	{
		dis((b[i] + a[i]) % n)	
	}
}
