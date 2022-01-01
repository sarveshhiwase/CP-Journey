#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

void rightrotate(ll arr[],ll n){
	ll last = arr[n-1];
	for(ll i = n-1; i > 0; i--){
		arr[i] = arr[i-1];
	}
	arr[0] = last;
}

void leftrotate(ll arr[],ll n){
	ll first = arr[0];
	for(ll i = 0; i < n-1; i++){
		arr[i] = arr[i+1];
	}
	arr[n-1] = first;
}

void printarray(ll arr[], ll n){
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
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
	ll n;
	cin >> n;
	ll arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	//Right rotate
	rightrotate(arr,n);
	printarray(arr,n);
	//left rotate
	leftrotate(arr,n);
	printarray(arr,n);
}
