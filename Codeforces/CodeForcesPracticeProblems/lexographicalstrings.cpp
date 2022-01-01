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
	string a,b;
	cin >> a >> b;
	transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    int flag = 2;
    for (int i = 0; i < a.length(); i++)
    {
    	if(a[i] != b[i]){
			if((int)a[i] < (int)b[i]){
				flag = 1;
				break;
			} else {
				flag = 0;
				break;
			}
    	}
    }

    if(flag == 2){
    	cout << 0 << endl;
    } else if (flag == 1){
    	cout << -1 << endl;
    } else {
    	cout << 1 << endl;
    }
}
