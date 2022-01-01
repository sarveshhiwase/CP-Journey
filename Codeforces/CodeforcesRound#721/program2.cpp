#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

bool checkifanyiszero(string s){
	for (int i = 0; i < s.length(); i++)
	{
		if(s[i] == '0'){
			return true;
		}
	}
	return false;
}

bool isPalindrome(string s){
	string temp = s;
	for (int i = 0; i < s.length()/2; i++)
	{
		swap(s[i],s[s.length()-i-1]);
	}
	return temp == s;
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
	string sad;
	cin >> sad;
	ll chances = 0;
	ll alice = 0;
	ll bob = 0;
	bool lastrev = false;
	while(checkifanyiszero(sad)){
		chances++;
		bool money = false;
		if(lastrev){
			for (int i = 0; i < sad.length(); i++)
				{
					if(sad[i] == '0'){
						sad[i] = '1';
						money = true;
						break;
					}
				}
				lastrev = false;
		} else {
			if(isPalindrome(sad)){
				for (int i = 0; i < sad.length(); i++)
				{
					if(sad[i] == '0'){
						sad[i] = '1';
						money = true;
						break;
					}
				}
				lastrev = false;
			} else {
				lastrev = true;
				reverse(sad.begin(),sad.end());
			}	
		}
		
		if(chances & 1){
			if(money)
				alice += 1;
		} else {
			if(money)
				bob += 1;
		}
	}
	// cout << alice << " " << bob << "\n";
	if(alice == bob){
		cout << "DRAW" << "\n";
	} else if(alice > bob){
		cout << "BOB" << "\n";
	} else {
		cout << "ALICE" << "\n";
	}
}
