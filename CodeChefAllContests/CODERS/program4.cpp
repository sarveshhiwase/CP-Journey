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
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];    
    }
    ll first = -1;
    ll max_groups = INT_MIN;
    ll c = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0) {
            c++;
        } else {
            if(first == -1) {
                first = c;
                max_groups = max(max_groups,c);
                c = 0;
                continue;
            }
            max_groups = max(max_groups,c);
            c = 0;
        }
    }
    if(c){
        max_groups = max(max_groups,c+first);
    }
    if(first != -1){
        disnew(max_groups)
    } else {
        ll* min_e = min_element(arr,arr+n);
        ll cycles = (*min_e) * n;
        cycles += min_e - arr;
        disnew(cycles)
    }
}
