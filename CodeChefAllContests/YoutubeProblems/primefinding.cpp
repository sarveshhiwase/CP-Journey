#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;

#define MAX 10000000
 
bool prime[MAX + 1];
void SieveOfEratosthenes()
{
    memset(prime, true, sizeof(prime));
 
    prime[1] = false;
 
    for (int p = 2; p * p <= MAX; p++) {
        if (prime[p] == true) {
            for (int i = p * 2; i <= MAX; i += p)
                prime[i] = false;
        }
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

int t=1;
SieveOfEratosthenes();

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
    int count = 0, num = 1;
 
    while (count < n) {
        if (prime[num]) {
            cout << num << " ";
            count++;
        }
        num++;
    }
}
