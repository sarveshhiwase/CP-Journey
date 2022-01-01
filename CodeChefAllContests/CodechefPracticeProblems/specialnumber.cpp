#include <bits/stdc++.h>
using namespace std;

int sumOfSquareDigits(int n){
	int sum = 0;
	while(n){
		sum += (n % 10) * (n % 10);
		n /= 10; 
	}
	return sum;
}

int main() 
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    for (int i = 100; i <= 999; i++)
    {
    	if((i/11) == sumOfSquareDigits(i)){
    		cout << i << endl;
    	}
    }
    return 0; 
}