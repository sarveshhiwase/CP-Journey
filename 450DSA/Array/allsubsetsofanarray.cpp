#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

//Recursive implementation of finding all subsets of
//array
void subsets(ll arr[],ll l,ll r,ll sum = 0){
	// Print current subset
    if (l > r)
    {
        cout << sum << " ";
        return;
    }
 
    // Subset including arr[l]
    subsets(arr, l+1, r, sum+arr[l]);
 
    // Subset excluding arr[l]
    subsets(arr, l+1, r, sum);
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
	ll normalor = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		normalor |= arr[i];
	}
	ll total = 1 << n;
	ll totalxor = 0;
	//All subsets of array
	for(ll i = 0; i < total; i++){
		ll currxor = 0;
		for (ll j=0; j<n; j++)
            if (i & (1<<j))
                currxor ^= arr[j];
        totalxor += currxor;
	}
	// cout << totalxor << " " << normalor << "\n";
	subsets(arr,0,n-1);
}
