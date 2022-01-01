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
    if(n % 2 == 0){
        disnew(0)
        return;
    }
    ll temp = n;
    bool candone = false;
    while(temp){
        if(temp % 10 == 8 || temp % 10 == 0 || temp % 10 == 6 || temp % 10 == 2 || temp % 10 == 4)
            candone = true;
        temp /= 10;
    }
    string s = to_string(n);
    if((s[0] - '0') % 2 == 0){
        disnew("1")
        return;
    } else {
        if(candone){
            disnew("2")
        } else {
            disnew("-1")
        }
    }
}
