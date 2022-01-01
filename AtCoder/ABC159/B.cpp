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

bool check(string s,int st,int e){
    while(st < e){
        if(s[st++] != s[e--]) return false;
    }
    return true;
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

while(t--)
{
    solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
    string s;
    cin >> s;
    int len = s.size();
    if(len & 1){
        if(check(s,0,len-1) && check(s,0,(len - 1)/2 - 1) && check(s,(len + 3)/2-1,len-1)){
            disnew("Yes")
        } else {
            disnew("No")
        }
    } else {
        disnew("No")
    }
}
