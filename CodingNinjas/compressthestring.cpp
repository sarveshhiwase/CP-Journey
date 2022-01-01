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

void stringCompression(string &s) {
    int len = s.size();
    int k,i;
    i = k = 0;
    i = 1;
    char lastchar = s[0];
    int count = 1;
    while(i < len){
        if(s[i] == lastchar){
            count++;
        } else {
            s[k] = lastchar;
            k++;
            if(count != 1){
                s[k] = count + '0';
            	k++;
            }
            lastchar = s[i];
            count = 1;
        }
        i++;
    }
    s[k] = lastchar;
    k++;
    if(count != 1){
       s[k] = count + '0';
       k++;
    }
    s = s.substr(0,k);
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
	string s;
	cin >> s;
	stringCompression(s);
	disnew(s)
}
