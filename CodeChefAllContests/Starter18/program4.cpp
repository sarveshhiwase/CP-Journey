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
vector<int> numbers(1005,0);


bool decimaltobinary(int n){
	string t = "";
	while(n){
		t += (n % 2) + '0';
		n /= 2;
	}
	int i = 0;
	int j = t.size() - 1;
	while(i < j){
		if(t[i++] != t[j--])
			return false;
	}
	return true;
}

void generategood(){
	for (int i = 1; i <= 1004; i++)
	{
		if(decimaltobinary(i))
			numbers[i] = 1;
	}
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

generategood();
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
	ll sum = 0;
	vector<bool> tp(n+1,0);
	ll sizer = 0;
	for (int i = n; i >= 1; i--)
	{
		if(numbers[i] && (i + sum <= n)){
			sum += i;
			tp[i] = 1;
			sizer++;
		}
	}
	int t = sum != n;
	if(t){
		disnew(sizer+1)
		dis(1)
	} else {
		disnew(sizer)
	}
	for (int i = n; i >= 1; i--)
	{
		if(tp[i]){
			dis(i)
		}
	}
	disnew("")
}
