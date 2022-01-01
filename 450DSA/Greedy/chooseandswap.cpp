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

string chooseandswap(string s){
        // Code Here
        //find lowest character in string
        char min = s[0];
        int minin = 0;
        for(int i = 1; i < s.size(); i++){
            if(s[i] < min){
                min = s[i];
                minin = i;
            }
        }
        if(minin == 0){
            return s;
        }
        vector<int> res1;
        vector<int> res2;
        char tochange1 = s[0];
        char tochange2 = min;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == tochange1){
                res1.push_back(i);
            } else if(s[i] == tochange2){
                res2.push_back(i);
            }
        }
        for(int i = 0; i < res1.size(); i++){
            s[res1[i]] = tochange2;
        }
        for(int i = 0; i < res2.size(); i++){
             s[res2[i]] = tochange1;
        }
        return s;
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

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	string sad = "abba";
	disnew(chooseandswap(sad))
}
