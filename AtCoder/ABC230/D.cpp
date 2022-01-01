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

ll binarysearch(vector<pair<ll,ll>> a,ll s,ll x){
    ll len = a.size();
    ll low = s;
    ll high = len - 1;
    ll mid;
    ll res = -1;
    while(low <= high){
        mid = low + (high - low) / 2;
        if(a[mid].first > x){
            high = mid - 1;
        } else {
            res = mid;
            low = mid + 1;
        }
    }
    return res;
}

bool comp(const pair<int,int> a, const pair<int,int> b){
    if(a.second < b.second){
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
    ll n,d;
    cin >> n >> d;
    vector<pair<ll,ll>> arr(n,{0,0});
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end(),comp);
    disnew(binarysearch(arr,1,arr[0].second + d - 1))
    // ll pos = 1;
    // ll punches = 0;
    // for(int i = pos; i < n; i++)
    // {
    //     ll t = arr[pos-1].second + d - 1;
    //     punches++;
    //     pos = binarysearch(arr,pos,t);
    // }
    for(int i = 0; i < n; i++)
    {
        dis(arr[i].first) disnew(arr[i].second)   
    }
    // disnew(punches)
}
