#include<bits/stdc++.h>
#define mod 1000000007
using namespace std;

int modular(int a, int m)
{
    return (a%m + m) % m;
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
	int n,w,wr;
	cin >> n >> w >> wr;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	if(w <= wr){
		cout << "YES" << endl;
	} else if(n == 1){
		cout << "NO" << endl;
	}

	 else {
		int diff = w - wr;
		int left_sum = 0;
		int right_sum = 0;
		int t = 0;
		int flag = 0;
		for (int i = 0; i < n; i++)
		{
			if(arr[i] < wr){
				t++;
				if(t & 1)
					left_sum += arr[i];
				else 
					right_sum += arr[i];
			}
			if((left_sum == right_sum) && (left_sum + right_sum) >= diff ){
				flag = 1;
				break;
			}
		}
		if(flag)
			cout << "YES" << endl;
		else 
			cout << "NO" << endl;
	}

}
