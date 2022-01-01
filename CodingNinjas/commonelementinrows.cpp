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

#include<climits>
int binarysearch(int arr[],int n,int k){
    int low = 0;
    int high = n;
    int mid;
    while(low <= high){
        mid = (high + low) / 2;
        if(arr[mid] == k){
            return 1;
        } else if(arr[mid] > k){
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return 0;
}

int findCommonEleInRows(int **mat, int M, int N) {
   
  /* 
   Don't write main().
   Don't read input, it is passed as function argument.
   Write your code here.
  */
    // m are rows, n are columns
    // we can use binary search to search in every row 
    // except row 1
    int minelem = INT_MAX;
    for(int i = 0; i < N; i++){
        bool tp = true;
        for(int j = 1; j < M; j++){
           if(!binarysearch(mat[j],N-1,mat[0][i])){
               tp = false;
               break;
           }
        }
        if(tp){
            return mat[0][i];
        }
    }
	return -1;
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
	int M,N;
	cin >> M >> N;
	int mat[M][N];
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> mat[i][j];
		}
	}
	int **tp = mat;
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			dis(mat[i][j])
		}
		disnew("")
	}
	disnew(findCommonEleInRows(tp,M,N))
}
