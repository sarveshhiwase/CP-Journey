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

bool isvowel(char ch){
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        return true;
    return false;
}

int maxVowels(string s, int k) {
    //create a k size window where you will first count the vowels
    //in first window
    int maxvow = 0;
    int count = 0;
    int p = 0;
    int q = k;
    for (int i = 0; i < k; i++)
    {	
    	if(isvowel(s[i])){
    		count++;
    	}	
    }
    maxvow = max(maxvow,count);
    while(q < s.size()){
        if(isvowel(s[q])){
            count++;
        }
        if(isvowel(s[p])){
            count--;
        }
        p++;
        q++;
        maxvow = max(maxvow,count);
    }
    return maxvow;
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
    disnew(maxVowels("abciiiidef",4))
}
