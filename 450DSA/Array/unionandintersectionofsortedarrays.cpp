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
	ll n,m;
	cin >> n >> m;
	// We are given that arrays are sorted
	ll arr1[n];
	ll arr2[m];
	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
	}
	for (int i = 0; i < m; i++)
	{
		cin >> arr2[i];
	}
	//We will basically implement merge process
	// of merge sort using two pointer technique.
	// 1 2 3 4 5 6
	// 1 2 3 7
	// Union of two sorted arrays
	vector<ll> unions;
	//Intersection of two sorted arrays
	vector<ll> intersection;
	int p = 0, q = 0;
	while(p < n && q < m){
		if(arr1[p] > arr2[q]){
			unions.push_back(arr2[q]);
			q++;
		} else if(arr1[p] == arr2[q]) {
			unions.push_back(arr1[p]);
			intersection.push_back(arr1[p]);
			p++;
			q++;
		} else {
			unions.push_back(arr1[p]);
			p++;
		}
	}
	while(p < n){
		unions.push_back(arr1[p]);
		p++;
	}
	while(q < m){
		unions.push_back(arr2[q]);
		q++;
	}
	for (int i = 0; i < unions.size(); i++)
	{
		cout << unions[i] << " ";
	}
	cout << "\n";
	for (int i = 0; i < intersection.size(); i++)
	{
		cout << intersection[i] << " ";
	}
	//Above algorithm works for all distinct elements
	// perfectly fine
	//but it does not handle duplicates
	//Set and map is the best approach for this problem
}
