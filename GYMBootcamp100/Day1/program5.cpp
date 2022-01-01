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
    string s;
    cin >> s;
    ll player = 1;
    bool isdangerous = false;
    for (int i = 1; i < s.size(); i++)
    {
        if(player >= 7){
            isdangerous = true;
            break;
        }
        if(s[i] == s[i-1]){
            player++;
        } else {
            player = 1;
        }
    }
    if(player >= 7){
        isdangerous = true;
    }
    if(isdangerous){
        disnew("YES")
    } else {
        disnew("NO")
    }
}
