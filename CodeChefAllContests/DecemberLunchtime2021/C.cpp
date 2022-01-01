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

int t=1;
cin>>t;

while(t--)
{
solve();
}

return 0;
}

void solve()
{
    ll n;
    cin >> n;
    ll arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    ll first,second;
    for(int i = 1; i < n; i++){
        if(arr[i-1] > arr[i]){
            first = i;
            break;
        }
    }
    for(int i = n - 1; i > 0; i--){
        if(arr[i-1] > arr[i]){
            second = i;
            break;
        }
    }
    ll steps = 0;
    if(first < second){
        steps += *min_element(arr+first,arr+second);
        steps += *max_element(arr+first,arr+second);
    }
    disnew(steps)
}