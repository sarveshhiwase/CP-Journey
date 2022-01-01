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

vector<bool> primes(3000+6,1);

void seive(){
    primes[0] = primes[1] = 0;
    for(int i = 2; i * i <= 3005; i++){
        for(int j = i * i; j <= 3005; j += i){
            primes[j] = 0;
        }
    }
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
cin>>t;

seive();

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
    ll primecount;
    ll ans = 0;
    for(int j = 1; j <= n; j++){
        primecount = 0;
        for (ll i = 1; i * i <= j; i++)
        {
            if(j % i == 0){
                if(primes[i]){
                    primecount++;
                } 
                if(i != (j / i) &&  primes[j/i]){
                    primecount++;
                }
            }
        }
        if(primecount == 2){
            ans++;
        }
    }
    disnew(ans)
}
