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
    ll n,k;
    cin >> n >> k;
    ll kt = k;
    string s = to_string(n);
    ll len = s.size();
    vector<ll> t1,t2;
    for (int i = 0; i < len; i++)
    {
        t1.push_back(s[i] - '0');
        t2.push_back(s[i] - '0');
    }
    sort(t1.begin(), t1.end());
    sort(t2.begin(), t2.end());
    ll i = 0;
    while(kt){
        if(i == t1.size()){
            i = 0;
        }
        if(t1[i] != 9){
            t1[i]++;
            kt--;
        }
        i++;
    }
    kt = k;
    i = 0;
    while(kt){
        if(i == t2.size()){
            i = 0;
        }
        while(kt && t2[i] != 9){
            t2[i]++;
            kt--;
        }
        i++;
    }
    ll prod1 = 1;
    ll prod2 = 1;
    for (int i = 0; i < t1.size(); i++)
    {
        prod1 *= t1[i];
    }
    for (int i = 0; i < t2.size(); i++)
    {
        prod2 *= t2[i];
    }
    disnew(max(prod1,prod2))
}
