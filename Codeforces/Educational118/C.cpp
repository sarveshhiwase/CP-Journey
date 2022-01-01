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

bool damagedone(ll arr[],ll n,ll thish,ll h){
    ll attack = 0;
    for(int j = 0; j < n - 1; j++){
        if(arr[j+1] - arr[j] < thish){
            attack += arr[j+1] - arr[j];
        } else {
            attack += thish;
        }
    }
    attack += thish;
    if(attack >= h){
        return true;
    }
    return false;
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

while(t--)
{
    solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
    ll n,h;
    cin >> n >> h;
    ll arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];    
    }
    ll min_h = ceil((long double)(h)/n);
    ll max_h = h;
    ll mid;
    ll answer = -1;
    while(min_h <= max_h){
        mid = min_h + (max_h - min_h) / 2;
        if(damagedone(arr,n,mid,h)){
            answer = mid;
            max_h = mid - 1;
        } else {
            min_h = mid + 1;
        }
    }
    disnew(answer)
}
