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
	int n;
	cin >> n;
	int nums[n];
	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}
	// int l = 0, r = 1,sum = arr[0],maxsum = 0;
	// while(l <= n-1 && r <= n-1){
	// 	if(arr[l] <= arr[r]){
	// 		sum += arr[r];
	// 		l++;
	// 		r++;
	// 		if(sum > maxsum)
	// 			maxsum = sum;
	// 	} else {
	// 		if(sum > maxsum)
	// 			maxsum = sum;
	// 		l = r;
	// 		sum = arr[l];
	// 		r++;
	// 	}	
	// }

	int first = 0;
	int second = 1;
	int sum = nums[first];
	int max_val = -1;

    if(n == 1)
    {
        cout << nums[0] << endl;
    } else {
	    while(second < n)
	    {
	        if(nums[first] < nums[second])
	        {
	            sum = sum + nums[second];
	            max_val = max(sum,max(max_val,nums[second]));
	            // max_val = max(sum,max_val);
	            second += 1;
	            first += 1;
	        }
	        else
	        {
	            max_val = max(max_val,nums[first]);
	            sum = nums[second];
	            first = second;
	            second = second + 1;
	        }
	    }
		cout << max_val << endl;
	}
}
