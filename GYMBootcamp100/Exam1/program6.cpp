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
/*cin>>t;*/

while(t--)
{
    solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char,int> m;
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        m[s[i]]++;
    }
    ll ans = 0;
    vector<ll> tp;
    for(auto j:m){
        tp.push_back(j.second);
    }
    sort(tp.begin(), tp.end(),greater<int>());
    for (int i = 0; i < tp.size(); i++)
    {
        if(k - tp[i] >= 0){
            ans += tp[i] * tp[i];
            k -= tp[i];
        } else {
            if(k)
                ans += (k) * (k);
            break;
        }
    }
    disnew(ans)
}
