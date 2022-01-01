#include<bits/stdc++.h>

bool vowel(char c)
{
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
    {
        return true;
    }
    return false;
}

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
	string bad;
	cin >> bad;
	int l = 0, r = bad.length() - 1;
	// unordered_set<char> sad;
	// sad.insert('a');
	// sad.insert('e');
	// sad.insert('i');
	// sad.insert('o');
	// sad.insert('u');
	// sad.insert('A');
	// sad.insert('E');
	// sad.insert('I');
	// sad.insert('O');
	// sad.insert('U');
	while(l < r){
		// auto it = sad.find(bad[l]);
		// // cout << *it << endl;
		// auto it1 = sad.find(bad[r]);
		if(vowel(bad[l]) && vowel(bad[r])){
			swap(bad[l],bad[r]);
			l++;
			r--;
		} 
		if(!vowel(bad[l])){
			l++;
		}
		if(!vowel(bad[r])){
			r--;
		}
	}
	cout << bad << endl;
}
