#include<bits/stdc++.h>

using namespace std;

long long int makedivby2andodd(long long int a){
	long long int steps = 0;
	while((a/2) % 2 == 0){
		steps++;
		a /= 2;
	}
	return steps+1;
}

long long int makedivby2andeven(long long int a){
	long long int steps = 0;
	while((a/2) % 2 != 0){
		steps++;
		a /= 2;
	}
	return steps;
}

long long int binaryToDecimal(string n)
{
    string num = n;
    long long int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    long long int base = 1;
 
    long long int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }
 
    return dec_value;
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
	long long int n;
	cin >> n;
	string a,b;
	cin >> a;
	cin >> b;
	long long int xmovestoeven = 0;
	long long int ymovestoodd = 0;
	long long int first = binaryToDecimal(a);
	long long int second = binaryToDecimal(b);
	if(first % 2 == 0 && second % 2 == 0){
		// now we know xor will be even
		// so we should make xor odd

		ymovestoodd = min(makedivby2andodd(first),makedivby2andodd(second));
	} else if(first % 2 != 0 && second % 2 != 0){
		// now we know xor will be odd
		// so we should make xor odd
		ymovestoodd = min(makedivby2andeven(first),makedivby2andeven(second));
	} else {
		// now we know xor will be odd
		// so we should make xor even
		int i,o,p,c;
		if(first % 2 == 0){
			i = makedivby2andeven(second);
			o = makedivby2andodd(first);
			xmovestoeven = min(i,o);
		} else {
			p = makedivby2andeven(first);
			c = makedivby2andodd(second);
			xmovestoeven = min(p,c);
		}
	}

	cout << xmovestoeven << " " <<  ymovestoodd << endl;
}
