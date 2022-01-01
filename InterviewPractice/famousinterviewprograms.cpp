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

/*All functions for all programs */

int binarytodecimal(string s){
	int len = s.size();

	int decimal = 0;
	int base = 1;

	for (int i = len - 1; i >= 0; i--)
	{
		decimal += base * (s[i] - '0');
		base = base<<1;
	}
	return decimal;
}

int binarytodecimalrecursive(string s,int ind,int sum,int base){
	if(ind < 0){
		return sum;
	}
	sum += base * (s[ind] - '0');
	return binarytodecimalrecursive(s,ind-1,sum,base<<1);
}

string decimaltobinary(int n){
	string res = "";

	while(n){
		res += char((n % 2) + 48);
		n /= 2;
	}
	reverse(res.begin(),res.end());
	return res;
}

void decimaltobinaryrecursive(int n){
	if(n != 0){
		decimaltobinaryrecursive(n/2);
		cout << n%2;
	}
	return;
}

int stringtointeger(string s){
	int len = s.size();
	int number = 0;

	//reverse the string to integer
	for (int i = len - 1; i >= 0; i--)
	{
		number = number * 10 + (s[i] - '0');	
	}
	number = 0;
	for (int i = 0; i < len; i++)
	{
		number = number * 10 + (s[i] - '0');	
	}

	return number;
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
	disnew(binarytodecimalrecursive("100110",5,0,1))
	decimaltobinaryrecursive(20);
	disnew("")
	disnew(stringtointeger("12347"))
}
