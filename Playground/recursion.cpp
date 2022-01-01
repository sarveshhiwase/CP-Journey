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

bool recursivepalindrome(string s,int start,int end){
	if(start >= end){
		return true;
	}
	if(s[start] != s[end]){
		return false;
	}
	return recursivepalindrome(s,start + 1, end - 1);
}

void reversestring(string &s,int start,int end){
  if(start >= end){
    return;
  }
  swap(s[start],s[end]);
  reversestring(s,start+1,end-1);
}

void printrecursive(int &n){
	cout << n << " ";
  	if(n <= 0){
  		return;
  	}
  	n -= 5;
  	printrecursive(n);
}

void printrecursive2(int &n,int x){
	if(n >= x){
		return;
	}
	n += 5;
	cout << n << " ";
	printrecursive2(n,x);
}

int firstcapital(string s,int start,int end){
  if(s[start] <= 90 && s[start] >= 65){
    return start;
  }
  if(start < end){
    return firstcapital(s,start+1,end);
  }
  
  return -1;
}


bool isattacked(int x,int y,vector<vector<int>> &board){
	int n = board.size();
	// disnew(n)
	// checking row
	for (int i = 0; i < n; i++)
	{
		if(board[x][i] == 1){
			return true;
		}
	}
	//checking col
	for (int i = 0; i < n; i++)
	{
		if(board[i][y] == 1){
			return true;
		}
	}
	//checking diagonals
	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++){
			if(i + j == x + y && board[i][j] == 1){
				return true;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++){
			if(i - j == x - y && board[i][j] == 1){
				return true;
			}
		}
	}
	return false;
}


bool Nqueen(vector<vector<int>>& board,int n){
	// static bool flag = false;
	if(n == 0){
		return true;
	}
	int len = board.size();
	for (int i = 0; i < len; i++)
	{
		for(int j = 0; j < len; j++){
			if(isattacked(i,j,board)){
				continue;
			}
			board[i][j] = 1;
			if(Nqueen(board,n-1)){
				// flag = true;
				// for (int i = 0; i < 4; i++)
				// 	{
				// 		for(int j = 0; j < 4; j++){
				// 			dis(board[i][j])
				// 		}
				// 		disnew("")
				// 	}
			}
			board[i][j] = 0;
		}
	}
	return false;
}

void recursivestringreverse(string s,int end){
	if(end < 0){
		return;
	}
	cout << s[end];
	recursivestringreverse(s,end-1);
}

int series(int n,vector<int> &memo){
	if(memo[n] != -1){
    return memo[n];
  }
  if(n == 0){
  	memo[n] = 0;
    return 0;
  }
  if(n <= 2){
  	memo[n] = 1;
    return 1;
  }
  memo[n] = series(n-1,memo) + series(n-2,memo) + series(n-3,memo);
  return memo[n];
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

while(t--)
{
	solve();
}

cerr<<"time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;

return 0;
}

void solve()
{
	vector<vector<int>> chessboard(4,vector<int> (4,0));
	// disnew(Nqueen(chessboard,4))
	Nqueen(chessboard,4);
	for (int i = 0; i < 4; i++)
					{
						for(int j = 0; j < 4; j++){
							dis(chessboard[i][j])
						}
						disnew("")
					}
}
