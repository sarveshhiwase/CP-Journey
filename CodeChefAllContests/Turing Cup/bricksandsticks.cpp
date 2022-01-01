#include<bits/stdc++.h>

using namespace std;

int smallestamong3(int a,int b,int c){
	int min = INT_MAX;
	if(min >= a){
		min = a;
	} 
	if(min >= b){
		min = b;
	}
	if(min >= c){
		min = c;
	}
	return min;
}

bool isValidTriangle(int a,int b,int c){
	//a,b,c are sides of triangle
	if (a + b <= c || a + c <= b || b + c <= a)
        return false;
    return true;
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
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	

	int minsteps = 0;
	for (int i = 0; i <= n-3; i++)
	{
		while(!isValidTriangle(arr[i],arr[i+1],arr[i+2])){
				int smallest = smallestamong3(arr[i],arr[i+1],arr[i+2]);
				int lastindex = 0;
				for (int k = i; k <= i+2; k++)
				{
					if(arr[k] == smallest){
						lastindex = k;
					}
				}
				arr[lastindex]++;
				minsteps++;
		}
	}
	cout << minsteps << endl;
}
