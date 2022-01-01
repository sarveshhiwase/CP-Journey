#include<bits/stdc++.h>
#define ll long long int
#define mod 1000000007
#define negmod(a) (a%mod + mod) % mod 
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
	string board[3];
	int xes = 0;
	int oes = 0;
	int underscores = 0;
	for (int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++){
			cin >> board[i][j];
			if(board[i][j] == 'X'){
				xes++;
			} else if(board[i][j] == 'O'){
				oes++;
			} else {
				underscores++;
			}
		}
	}
	int xwin = 0;
	int owin = 0;
	//First all rows
	if(board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X'){
		xwin = 1;
	}
	if(board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X'){
		xwin = 1;
	}
	if(board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X'){
		xwin = 1;
	}
	//Then all columns
	if(board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X'){
		xwin = 1;
	}
	if(board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X'){
		xwin = 1;
	}
	if(board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X'){
		xwin = 1;
	}
	//Then all diagonals
	if(board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X'){
		xwin = 1;
	}
	if(board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X'){
		xwin = 1;
	}
	//Now same for o's
	//First all rows
	if(board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O'){
		owin = 1;
	}
	if(board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O'){
		owin = 1;
	}
	if(board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O'){
		owin = 1;
	}
	//Then all columns
	if(board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O'){
		owin = 1;
	}
	if(board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O'){
		owin = 1;
	}
	if(board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O'){
		owin = 1;
	}
	//Then all diagonals
	if(board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O'){
		owin = 1;
	}
	if(board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O'){
		owin = 1;
	}

	//Now for the final output
	if((xwin == 1 && owin == 1 ) || (xes - oes < 0) || (xes - oes > 1)){
		cout << 3 << endl;
	} else if(xes == 0 && oes == 0 && underscores == 9){
		cout << 2 << endl;
	} else if(xwin == 1 && owin == 0 && xes > oes){
		cout << 1 << endl;
	} else if(xwin == 0 && owin == 1 && xes == oes){
		cout << 1 << endl;
	} else if(xwin == 0 && owin == 0 && underscores == 0){
		cout << 1 << endl;		
	} else if(xwin == 0 && owin == 0 && underscores > 0){
		cout << 2 << endl;
	} else {
		cout << 3 << endl;
	}
}
