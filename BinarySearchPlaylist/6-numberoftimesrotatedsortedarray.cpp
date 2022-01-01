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

int noofrotationsinsortedarray(int arr[],int n){
    int start = 0;
    int end = n - 1;
    int mid;
    int mi = INT_MAX;
    int minindex = -1;
    while(start <= end){
        mid = start + (end - start)/2;
        if(a[mid] <= a[end]){
            end = mid - 1;
        } else {
            start = mid + 1;
        } 
        if(mi > a[mid]){
            mi = a[mid];
            minindex = mid;
        }
    }
    return minindex;
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
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];	
	}
	int ans = noofrotationsinsortedarray(arr,n);
    dis("Rotations are")
    disnew(ans)
    dis("Minimum Element is")
    dis(a[ans])
}
