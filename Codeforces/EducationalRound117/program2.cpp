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
    ll n,a,b;
    cin >> n >> a >> b;
    vector<ll> visited(n+1,0);
    vector<ll> first;
    vector<ll> second;
    
    int i = 1;
    int size = n / 2;
    size--;
    while(size){
        if(!visited[i] && i != a){
            visited[i] = 1;
            second.push_back(i);
            size--;
        }
        i++;
    }
    visited[b] = 1;
    second.push_back(b);
    for (int i = 1; i <= n; i++)
    {
        if(!visited[i])
            first.push_back(i);
    }
    if(first.size() + second.size() > n){
        disnew("-1")
        return;
    }
    for (int i = 0; i < first.size(); i++)
    {
        dis(first[i])
    }
    for (int i = 0; i < second.size(); i++)
    {
        dis(second[i])
    }
    disnew("")
}
