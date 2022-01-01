#include<bits/stdc++.h>
#define mod 1000000007

using namespace std;

long long int isSubseqPossible(int arr[], int N, int K)
{
    int i;
    long long int res = 0;
    int odd = 0, even = 0;
    for (i = 0; i < N; i++) {
        if (arr[i] % 2 == 1)
            odd++;
        else
            even++;
    }
    if (odd == 0 
|| (even == 0 && K % 2 == 0))
        return false;

    return true;
}

long long int factorial(int n){
	if(n == 0){
		return 1;
	}
	long long int res = n;
	while(--n){
		res = (res * n) % mod;
	}
	return res;
}

long long int multiplytill(int n,int end){
	long long int res = 1;
	for (int i = n; i >= end; i--)
	{
		res *= i;
	}
	return res;
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
cin >> t;

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	int n,k;
	cin >> n >> k;
	// cout << n << k << endl;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	int oddcount = 0;
	int evencount = 0;
	for (int i = 0; i < n; i++)
	{
		if(arr[i] & 1)
			oddcount++;
		else
			evencount++;
	}
	if( k == 1)
		cout << oddcount << endl;
	else {
		cout << (evencount * (k-1)) * oddcount << endl;
	}
	

}	
