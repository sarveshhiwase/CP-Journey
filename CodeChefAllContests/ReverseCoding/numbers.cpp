#include<bits/stdc++.h>

using namespace std;

void reversearray(int arr[],int n){
	for (int i = 0; i < n/2; i++)
	{
		swap(arr[i],arr[n-i-1]);
	}
}

bool checkifarrayisnotreversed(int arr[],int reversed[] ,int n){
	for (int i = 0; i < n; i++)
	{
		if(arr[i] != reversed[i]){
			return true;
		}
	}
	return false;
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
	int n;
	cin >> n;
	int arr[n],temo[n];
	for (int i = 1; i <= n; i++)
	{
		arr[i-1] = i;
		temo[i-1] = i;
		cout << arr[i-1] << " ";
	}
	cout << "\n";
	reversearray(temo,n);
	int k = 0;
	while(checkifarrayisnotreversed(arr,temo,n)){
		swap(arr[k],arr[n-k-1]);
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << "\n";
		k++;
	}
}
