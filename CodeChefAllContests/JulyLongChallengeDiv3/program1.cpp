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

// Function to return gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
 
// Function to find gcd of array of
// numbers
int findGCD(vector<ll>& arr,int start,int end)
{
    int result = arr[start];
    for (int i = start + 1; i <= end; i++)
    {
        result = gcd(arr[i], result);
 
        if(result == 1)
        {
           return 1;
        }
    }
    return result;
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
	ll n;
	cin >> n;
	vector<ll> arr(n,0);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	sort(arr.begin(),arr.end());
	ll mingcd = findGCD(arr,1,n-1);
	ll maxgcd = findGCD(arr,0,n-2);
	ll notes1,notes2;
	notes1 = notes2 = 1;

	for (int i = 1; i < n; i++)
	{
		notes1 += (arr[i]/mingcd);
	}
	for (int i = 0; i < n - 1; i++)
	{
		notes2 += (arr[i]/maxgcd);
	}
	disnew(min(notes1,notes2))
}
