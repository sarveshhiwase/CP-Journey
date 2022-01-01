#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
using namespace std;
const int N = 1e7 + 2;

vector<bool> prime(N+1,true);
vector<ll> prefix_count(N+1,0);

int computeXOR(int n)
{
   
  // If n is a multiple of 4
  if (n % 4 == 0)
    return n;
 
  // If n%4 gives remainder 1
  if (n % 4 == 1)
    return 1;
 
  // If n%4 gives remainder 2
  if (n % 4 == 2)
    return n + 1;
 
  // If n%4 gives remainder 3
  return 0;
}

int first(int x, int n)
{
    int low = 0, high = n - 1, res = -1;
    while (low <= high) {
        // Normal Binary Search Logic
        int mid = (low + high) / 2;
        if (prefix_count[mid] > x)
            high = mid - 1;
        else if (prefix_count[mid] < x)
            low = mid + 1;
 
        // If arr[mid] is same as x, we
        // update res and move to the left
        // half.
        else {
            res = mid;
            high = mid - 1;
        }
    }
    return res;
}

void seive(){
	prime[0] = prime[1]= false;
	for (int i = 2; i * i <= N; i++)
	{
		if(prime[i]){
			for(int j = i * i; j <= N; j+=i)
				prime[j] = false;
		}
	}
}

void precomputecount(){
	ll count = 0;
	for (int i = 1; i <= N; i++)
	{
		if(prime[i])
			count++;
		prefix_count[i] = count;
	}
}


void solve();

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

seive();
precomputecount();

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
	cout << computeXOR(first(n,N)) << "\n";
}
