//Recursion has two phases 
// 1.Calling phase
// 2.Returning phase

// Recursion Tracing is done using a tree(Recursion Tree)
// For Example- First function tracing is like this
// 		fun1(3)					||		
// 		    /\					||			
// 		   /  \					||	
// 		  3  fun1(2)			||
// 		   		/\				||
// 		       /  \				||
// 		      2  fun1(1)    	||	
// 		      		/\			||
// 		   		   /  \			||
// 		   		  1   fun1(0)  Which will terminate and return to where it was called 


// Recursion behind the scenes uses stack to maintain the addresses of previous call and
// return to it accordingly.
//Every time a call is made to a function new activation record is made with memory for it'
// s variables and are deleted after function call has returned 


//Time and Space analysis
// Time is O(n)
// Space is also O(n) - Generally certain compilers smartly
// compile recursive code to iterative

// void dummyrecursivefunc(int n){
// 	if(n > 0){
// 		//This is ascending phase
// 		//Every statement before recursive call will be executed 
// 		//before function call
// 		dummyrecursivefunc(n-1);
// 		// This is descending phase
// 		//Every statement after recursive call will be executed 
// 		//after it has returned the call
// 	}
// }

#include<bits/stdc++.h>

using namespace std;


int fun3(int x, int y)
{
	// cout << x << " " << y << endl;
    if (x == 0)
        return y;
    else
        return fun3(x - 1, x + y);
}

int fun4(int n){
	if(n > 0){
		return fun4(n-1) + n;
	}
	return 0;
}

//Static variable are stored in code section where they have special place
// Once a variable is created it's available for lifetime of a program
// so every recursive call uses only one value of x
// so last updated value of x is used in every call here i.e 5
int fun5(int n){
	static int x = 0;
	if(n > 0){
		x++;
		return fun5(n-1) + x;
	}
	return 0;
}


void fun1(int n){
	if(n > 0){
		cout << n << " ";
		fun1(n-1);
	}
} 

void fun2(int n){
	if(n > 0){
		fun2(n-1);
		cout << n << " ";
	}
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
	cout << "Function call to function 1" << endl;
    fun1(3); 
    cout << endl;
	cout << "Function call to function 2" << endl;
    fun2(3);
    cout << endl;
	cout << "Function call to function 3" << endl;
    cout << fun3(3,2) << endl;
	cout << "Function call to function 4" << endl;
    cout << fun4(5) << endl;
    cout << "Function call to function 5" << endl;
    cout << fun5(5) << endl;
}
