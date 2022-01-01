#include<bits/stdc++.h>
#define ll long long int
// #define mod 1000000007
#define add insert
#define pb push_back 
#define rep(start,n) for(int i = start; i < n; i++)
#define dis(x) cout << x << " "; 
#define disnew(x) cout << x << "\n"; 
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

long long int maxProductSubset(vector<int> &arr,int n){
    long long int res = 1;
    int mod = 1e9 + 7;
    int zerocount = 0;
    int negativecount = 0;
    int maxnegvalue = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == 0){
            zerocount++;
            continue;
        }

        if(arr[i] < 0){
            negativecount++;
            maxnegvalue = max(maxnegvalue,arr[i]);
        }

        res = ((res % mod) * (arr[i] % mod)) % mod;
    }

    if(negativecount & 1){
        if(zerocount > 1 && negativecount == 1 && zerocount + negativecount == n){
            return 0;
        }
        return res / maxnegvalue;
    }
    return res;
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
	// vector<int> arr = {-2,-4,-6,-8,0,-8,-2};
    ll n;
    cin >> n;
    vector<int> arr(n,0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
	disnew(maxProductSubset(arr,n))
}
