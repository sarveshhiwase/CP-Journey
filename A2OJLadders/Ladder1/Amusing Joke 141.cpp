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
//cin>>t;

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	string guest,residence,pile;
    cin >> guest; 
    cin >> residence; 
    cin >> pile;
    int len1 = guest.size();
    int len2 = residence.size();
    int len3 = pile.size();
    int arr[26] = {0};
    if(len1 + len2 == len3){
        for (int i = 0; i < len1; i++)
        {
            arr[guest[i]-'A']++;
        }
        for (int i = 0; i < len2; i++)
        {
            arr[residence[i]-'A']++;
        }
        for (int i = 0; i < len3; i++)
        {
            arr[pile[i]-'A']--;
        }
        for (int i = 0; i < 26; i++)
        {
            if(arr[i] != 0){
                disnew("NO")
                return;
            }
        }
        disnew("YES")
    } else {
        disnew("NO")
    }
}