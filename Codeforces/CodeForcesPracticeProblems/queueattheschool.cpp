#include<bits/stdc++.h>

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
	int n,k;
	cin >> n >> k;
	string sad;
	cin >> sad;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		if(sad[i] == 'B'){
			arr[i] = k;
		} else {
			arr[i] = 0;
		}
	}
	for (int i = 0; i < k; i++)
	{
		for(int j = 0; j < n-1; j++){
			if(sad[j] == 'B' && sad[j+1] == 'G' && arr[j] > 0){
					swap(sad[j],sad[j+1]);
					arr[j]--;
					swap(arr[j],arr[j+1]);
			}
		}
		cout << sad << endl;
	}
	
	
	cout << sad << endl;
}
