//Write a program that prints the 
//sequence 1, 5, 10, 50, 100, … up to a given limit.

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n = 6;
	int i = 1;
	int k = 1;
	while(i <= n){
		cout << k << endl;
		if(i & 1){
			// i is odd
			k *= 5;
		} else {
			// i is even
			k *= 2;
		}
		i++;
	}
    return 0; 
}