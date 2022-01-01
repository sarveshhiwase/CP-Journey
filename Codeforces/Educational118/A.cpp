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
    string x1;
    int p1;
    cin >> x1 >> p1;
    string x2;
    int p2;
    cin >> x2 >> p2;
    ll len1 = x1.size() + p1;
    ll len2 = x2.size() + p2;
    if(len1 > len2){
        disnew(">")
    } else if(len1 < len2){
        disnew("<")
    } else {
        ll i = 0;
        ll j = 0;
        while(i < x1.size() || j < x2.size()){
            if(i < x1.size() && j < x2.size()){
                if((x1[i] - '0') > (x2[j] - '0')){
                    disnew(">")
                    return;
                } else if((x1[i] - '0') < (x2[j] - '0')){
                    disnew("<")
                    return;
                } 
                i++;
                j++;
            } else {
                while(i < x1.size()){
                    if((x1[i] - '0') > 0){
                        disnew(">")
                        return;
                    } 
                    i++;
                }
                while(j < x2.size()){
                    if((x2[j] - '0') > 0){
                        disnew("<")
                        return;
                    }
                    j++;
                }
            }
        }
        disnew("=")
    }
}
