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

ll binarysearch(ll arr[],ll n,ll k){
    ll start = 0;
    ll end = n - 1;
    while(end >= start){
        ll mid = (start + end)/2;
        if(arr[mid] == k){
            return mid;
        }
        if(arr[mid] > k){
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
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
    ll arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];    
    }
    sort(arr,arr+n);
    ll k = n / 2;
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++){
            if(arr[j] % arr[i] == 0){
                dis(arr[j]) disnew(arr[i])
                k--;
            } else if(binarysearch(arr,n,arr[j]%arr[i]) == -1){
                dis(arr[j]) disnew(arr[i])
                k--;
            }
            if(k <= 0) return;
        }   
    }

}
