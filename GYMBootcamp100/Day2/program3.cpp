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

bool isLucky(int n){
    bool islucky = true;
    while(n){
        if(n % 10 != 4 && n % 10 != 7){
            islucky = false;
            break;
        }
        n /= 10;
    }
    return islucky;
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
    int flag = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        if(n % i == 0){
            flag = isLucky(i) || isLucky(n/i);
            if(flag) break;
        }
    }
    if(flag)
        disnew("YES")
    else
        disnew("NO")
}
