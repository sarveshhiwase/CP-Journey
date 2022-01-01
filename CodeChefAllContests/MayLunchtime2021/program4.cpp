#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
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
	ll n,k;
	cin >> n >> k;
	string s;
	cin >> s;
	ll initialdistance = 0;
	for(int j = 0; j < s.size()-1; j++){
			if(s[j] == s[j+1]){
				initialdistance += 2;
			} else {
				initialdistance += 1;
			}
	}
	while(k--){
		ll q;
		cin >> q;
		q--;
		s[q] = s[q] == '1' ? '0' : '1';
		if(q < n - 1){
			if(s[q] == s[q+1]){
				initialdistance++;
			} else {
				initialdistance--;
			}
		}
		if(q > 0){
			if(s[q] == s[q-1]){
				initialdistance++;
			} else {
				initialdistance--;
			}
		}
		cout << initialdistance << "\n";
	}
	// ll arr[k];
	// for (int i = 0; i < k; i++)
	// {
	// 	cin >> arr[i];
	// }
	// ll initialdistance = 0;
	// for(int j = 0; j < s.size()-1; j++){
	// 		if(s[j] == s[j+1]){
	// 			initialdistance += 2;
	// 		} else {
	// 			initialdistance += 1;
	// 		}
	// }
	// for (int i = 0; i < k; i++)
	// {
	// 	ll original = 0;
	// 	if(arr[i] - 1 == 0){
	// 		if(s[arr[i] - 1] == s[arr[i]]){
	// 			original += 2;
	// 		} else {
	// 			original += 1;
	// 		}
	// 		s[arr[i] - 1] = (s[arr[i] - 1] == '1') ? '0' : '1';
	// 		int distance = 0;
	// 		if(s[arr[i] - 1] == s[arr[i]]){
	// 			distance += 2;
	// 		} else {
	// 			distance += 1;
	// 		}
	// 		initialdistance += distance -  original;
		
	// 	cout << initialdistance << "\n";
	// 	continue;
	// 	}
	// 	if(arr[i] - 1 == n-1){
	// 		if(s[arr[i] - 2] == s[arr[i]-1]){
	// 			original += 2;
	// 		} else {
	// 			original += 1;
	// 		}
	// 		s[arr[i] - 1] = (s[arr[i] - 1] == '1') ? '0' : '1';
	// 		int distance = 0;
	// 		if(s[arr[i] - 2] == s[arr[i]-1]){
	// 			distance += 2;
	// 		} else {
	// 			distance += 1;
	// 		}
	// 		initialdistance += distance -  original;
	// 	cout << initialdistance << "\n";
	// 	continue;
	// 	}
	// 	if(arr[i] - 1 - 1 >= 0 && arr[i] - 1 +1 <= n-1){
	// 		for(int tp = arr[i] - 2; tp < arr[i]; tp++){
	// 			if(s[tp] == s[tp+1]){
	// 				original +=2;
	// 			} else {
	// 				original += 1;
	// 			}
	// 		}
	// 	}
	// 	s[arr[i] - 1] = (s[arr[i] - 1] == '1') ? '0' : '1';
	// 	int distance = 0;
	// 	if(arr[i] - 1 - 1 >= 0 && arr[i] - 1 +1 <= n-1){
	// 		for(int tp = arr[i] - 2; tp < arr[i]; tp++){
	// 			if(s[tp] == s[tp+1]){
	// 				distance += 2;
	// 			} else {
	// 				distance += 1;
	// 			}
	// 		}
	// 	}
	// 	initialdistance += distance -  original;
	// 	cout << initialdistance << "\n";
	}

