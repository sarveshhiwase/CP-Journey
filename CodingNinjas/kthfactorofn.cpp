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
	if(n == 1 && k == 1){
		cout << 1 << "\n";
        return;
    } 
    if(n == 1 && k > 1){
    	cout << -1 << "\n";
        return ;
    }
    vector<int> factors;
    factors.push_back(1);
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            if(n/i == i){
                factors.push_back(n/i);
            } else {
                factors.push_back(n/i);
                factors.push_back(i);  
            }
        }
    }
    factors.push_back(n);
    sort(factors.begin(),factors.end());
    for(int i = 0; i < factors.size(); i++){
    	cout << factors[i] << " ";
    }
    cout << factors[k-1] << "\n";
    cout << "\n";
}
