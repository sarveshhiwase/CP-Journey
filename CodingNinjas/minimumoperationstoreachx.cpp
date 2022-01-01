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

	vector<string> sad = {"aboard","tail","above","tower"};
	sort(sad.begin(),sad.end());
	for (int i = 0; i < 4; i++)
	{
		disnew(sad[i])
	}
	// ll n,x;
	// cin >> n >> x;
	// ll arr[n];
	// for (int i = 0; i < n; i++)
	// {
	// 	cin >> arr[i];
	// }
	// bool isposs = false;
	// int p = 0;
	// int q = n - 1;
	// int removedsum = 0;
	// int steps = 0;
	// while(p < q){
	// 	if(arr[p] > arr[q]){
	// 		removedsum += arr[p];
	// 		steps++;
	// 		if(removedsum == x){
	// 			isposs = true;
	// 			break;
	// 		}
	// 		p++;
	// 	} else {
	// 		removedsum += arr[q];
	// 		steps++;
	// 		if(removedsum == x){
	// 			isposs = true;
	// 			break;
	// 		}
	// 		q--;
	// 	}
	// }
	// if(isposs)
	// 	disnew(steps)
	// else
	// 	disnew(-1)
}
