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
    ll n;
    cin >> n;
    vector<ll> arr(n,0);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];   
    }
    ll one_mod,two_mod,zero_mod;
    one_mod = two_mod = 0;
    zero_mod = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] % 3 == 1){
            one_mod++;
        } else if (arr[i] % 3 == 2){
            two_mod++;
        } else {
            zero_mod++;
        }
    }
    // 4 6 10
    // 5 5 9
    ll diff = abs(one_mod - two_mod);

    if(zero_mod == n){
        disnew(0)
    } else if(one_mod == two_mod){
        disnew((one_mod + two_mod) / 2)
    } else if(((diff % 3) == 0) && ((diff/3) <= zero_mod)){
        disnew((one_mod+two_mod)/2 + (diff / 3))
    } else {
        disnew(-1)
    }
}
