#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

ll count_same_digit(ll L, ll R)
{
    ll tmp = 0, ans = 0;
    // length of R
    ll n = log10(R) + 1;
  
    for (int i = 0; i < n; i++) {
        tmp = tmp * 10 + 1;
        for (int j = 1; j <= 9; j++) {
  
            if (L <= (tmp * j)
                && (tmp * j) <= R) {
                ans++;
            }
        }
    }
    return ans;
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
	cout << count_same_digit(1,n) << endl;
	
}
