#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define add insert
#define pb push_back 
#define rep(start,n) for(int i = start; i < n; i++)
#define dis(x) cout << x << " "; 
#define disnew(x) cout << x << '\n'; 
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
    vector<ll> zeroes;
    vector<ll> ones;
    ll x;
    for (int i = 0; i < n; i++)
    {  
        cin >> x;
        if(i & 1){
            ones.push_back(x);
        } else {
            zeroes.push_back(x);
        }
    }
    sort(zeroes.begin(), zeroes.end(),greater<int>());
    sort(ones.begin(), ones.end());

    ll total_subsequences = 0;

    //print both arrays simultaneously
    int first = 0;
    int second = 0;
    while(first < zeroes.size() && second < ones.size()){
        dis(zeroes[first++])
        dis(ones[second++])
    }
    while(first < zeroes.size())
        dis(zeroes[first++])

    while(second < ones.size())
        dis(ones[second++])
    disnew("")
    for(int i = 0; i < zeroes.size(); i++){
        for(int j = i; j < ones.size(); j++){
            total_subsequences += zeroes[i] * ones[j];
        }
    }
    disnew(total_subsequences)


}
