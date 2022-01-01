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

bool comp(const pair<int, int>& a, const pair<int,int>& b){
    if (a.first > b.first) {
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
    ll n;
    cin >> n;
    vector<pair<ll,ll>> arr(n,{0,0});
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        arr[i].second = i+1;   
    }
    ll timewalk = 0;
    sort(arr.begin(), arr.end(),comp);
    vector<ll> buildingpath(n+1,0);

    ll distance = 0;
    ll i = 0;
    while(i < n){
        if(!(i & 1)){
            distance++;
        }
        timewalk += 2 * distance * arr[i].first;
        buildingpath[arr[i].second] = distance;
        i++;
        if(i < n){
            timewalk += 2 * distance * arr[i].first;
            buildingpath[arr[i].second] = -distance;
            i++;
        } else {
            break;
        }
    }
    disnew(timewalk)
    for (int i = 0; i <= n; i++)
    {
        dis(buildingpath[i])
    }
    disnew("")
}
