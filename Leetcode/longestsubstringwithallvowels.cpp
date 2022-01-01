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

int longestBeautifulSubstring(string word) {
      int t=1;
        int len=0;
        int j=0;
        for(int i=0;i<word.length()-1;i++){
            if(word[i+1]>=word[i]){
                if(word[i+1]>word[i]){
                    t++;
                }
            }else{
                if(t==5){
                    len=max(len,i-j);
                }
                j=i;
                t=1;
            }
        }
        if(t==5){
           len=max(len,len-1-j);
        }
        return len;
        
    }


// int longestBeautifulSubstring(string word) {
        
//         int len = word.size();
        
//         if(len <= 4){
//             return 0;
//         }
//         int count = 1;
//         char last = word[0];
//         int maxlen = 0;
//         int start = -1;
//         for(int i = 1; i < len; i++){
//               // cout << count << " " << start << "\n";
//             if(word[i] < last){
//                 if(count == 5){
//                     maxlen = max(maxlen,i - 1 - start);
//                 }
              
//                 count = 1;
//                 start = i-1;
//             } else if(word[i] != last){
//                 count++;
//             }
//             last = word[i];
//         }
//         // cout << count << " " << len << "\n";
//         if(count == 5){
//             maxlen = max(maxlen,len - 1 - start);
//         }
//         return maxlen;
//     }

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
	disnew(s.size())
	disnew(longestBeautifulSubstring(s))
}
