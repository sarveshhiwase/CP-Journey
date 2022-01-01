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
    ll t = n;
    ll lucky = 0;
    while(t){
        lucky += (t % 10 == 4 || t % 10 == 7) ? 1 : 0;
        t /= 10;
    }
    bool islucky = lucky;
    while(lucky){
        if(lucky % 10 != 4 && lucky % 10 != 7){
            islucky = false;
            break;
        }
        lucky /= 10;
    }
    if(islucky)
        disnew("YES")
    else
        disnew("NO")
}
