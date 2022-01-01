#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 

using namespace std;

void solve();

// unordered_set<char> language1;
// unordered_set<char> language2;
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

// for(char tp = 'a'; tp <= 'm'; tp++){
// 	language1.insert(tp);
// }
// for(char tp = 'N'; tp <= 'Z'; tp++){
// 	language2.insert(tp);
// }


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
	string words[n];
	for (int i = 0; i < n; i++)
	{
		cin >> words[i];
	}
	bool final = true;
	for(int i = 0; i < n; i++){
		int len = words[i].size();
		bool first = false;
		bool second = false;
		bool third = false;
		for(int j = 0; j < len; j++){
			if('a' <= words[i][j] && words[i][j] <= 'm'){
				first = true;
			}
			// if(language1.find(words[i][j]) != language1.end()){
			// 	first = true;
			// }
			 else if('N' <= words[i][j] && words[i][j] <= 'Z'){
				second = true;
			} else {
				third = true;
				break;
			}
		}
		if(third){
			final = false;
			break;
		} else if(first && second){
			final = false;
			break;
		} 
	}
	if(final){
		cout << "YES" << "\n";
	} else {
		cout << "NO" << "\n";
	}
}
