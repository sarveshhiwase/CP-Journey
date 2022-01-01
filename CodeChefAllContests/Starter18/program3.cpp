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

int ret(int num){
    while(num)
        return (num + ret(num-2));
    return num;
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
// cin>>t;

while(t--)
{
    solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{

    char wish[] = "spritiad asdjkl";
    char *p;
    p = wish;
    p += 2;
    disnew(p)
    // ll n;
    // cin >> n;
    // string s,t;
    // cin >> s; 
    // cin >> t;
    // ll indices = 0;
    // bool good = false;
    // for (int i = 0; i < n; i++)
    // {
    //     if(s[i] == t[i]){
    //         if(good){
    //             indices++;
    //         }
    //     } else {
    //         if(s[i] < t[i]){
    //             indices++;
    //             good = true;
    //         } else {
    //             good = false;
    //         }
    //     }
    // }
    // disnew(indices)
}
