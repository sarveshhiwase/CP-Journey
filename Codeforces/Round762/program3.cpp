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
    ll a,s;
    cin >> a >> s;
    ll b = s - a;
    string t = to_string(a);
    string p = to_string(b);

    if(t.size() > p.size()){
        int j = t.size() - p.size();
        while(j--)
            p.insert(p.begin(),'0');
        string answer = "";
        for(int i = p.size() - 1; i >= 0; i--)
        {
            int sad = (t[i] - '0') + (p[i] - '0');
            string temp = to_string(sad);
            answer += temp;
        }
        reverse(answer.begin(), answer.end());
        if(answer == to_string(s)){
            disnew(b);
        } else {
            disnew(-1)
        }
    } else {
        int j = p.size() - t.size();
        while(j--)
            t.insert(t.begin(),'0');
        string answer = "";
        for(int i = p.size() - 1; i >= 0; i--)
        {
            int sad = (t[i] - '0') + (p[i] - '0');
            string temp = to_string(sad);
            answer += temp;
        }
        reverse(answer.begin(), answer.end());
        if(answer == to_string(s)){
            disnew(b);
        } else {
            disnew(-1)
        }
    }
}
