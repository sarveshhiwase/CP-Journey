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

int t=1;
cin>>t;

while(t--)
{
solve();
}

return 0;
}

void solve()
{
    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<char> st(k,'a');
    int p,q;
    if(k & 1){
        p = k / 2 ;
        q = k / 2 + 1;
        string ans = "";
        while(p >= 0 && q < k){
            ans += s[p];
            ans += s[q];
            q++;
            p--;
        }
        while(p >= 0){
            ans += s[p--];
        }
        while(q < n){
            ans += s[q++];
        }
        disnew(ans)
    } else {
        p = k / 2 - 1;
        q = k / 2;
        string ans = "";
        while(p >= 0 && q < k){
            ans += s[q];
            ans += s[p];
            q++;
            p--;
        }
        while(p >= 0){
            ans += s[p--];
        }
        while(q < n){
            ans += s[q++];
        }
        disnew(ans)
    }
}