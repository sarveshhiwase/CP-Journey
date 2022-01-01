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

int sb(int arr[], int n, int x)
    {
        // Your code goes here 
        //find k size sliding window
        int sum = 0;
        int breakindex = -1;
        for(int i = 0; i < n; i++){
            if(arr[i] > x){
                return 1;
            }
            sum += arr[i];
            if(sum > x){
                breakindex = i;
                break;
            } 
        }
        // cout << breakindex << "\n";
        int p = 0;
        int q = breakindex;
        while(p<q){
            if(arr[p] > arr[q]){
                sum -= arr[q];
                if(sum <= x){
                    break;
                }
                q--;
            } else if(arr[p] < arr[q]){
                // cout << p << "\n";
                sum -= arr[p];
                 if(sum <= x){
                    break;
                }
                p++;
            } else {
                sum -= arr[q];
                 if(sum <= x){
                    break;
                }
                q--;
            }
        }
        // cout << q << " " << p << "\n";
        return q - p + 1;
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
	int n,x;
	cin >> n >> x;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	disnew(sb(arr,n,x))
}
