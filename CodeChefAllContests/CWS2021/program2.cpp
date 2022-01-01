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
    ll n;
    cin >> n;
    vector<vector<char>> v(n,vector<char> (n,'a'));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            cin >> v[i][j];
        }   
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            if(i == 0 && (j == 0 || j == n - 1)){
                v[i][j] = '@';
            } else if(i == n - 1 && (j == 0 || j == n - 1)){
                v[i][j] = '@';
            } else if(i == 0 || i == n - 1){
                v[i][j] = '?';
            } else if(j == 0 || j == n - 1){
                v[i][j] = '?';
            }
        }   
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++){
            dis(v[i][j])
        }   
        disnew("")
    }
}
